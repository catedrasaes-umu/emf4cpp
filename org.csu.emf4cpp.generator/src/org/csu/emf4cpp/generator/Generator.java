package org.csu.emf4cpp.generator;

import java.io.IOException;
import java.nio.file.FileSystems;
import java.nio.file.FileVisitResult;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.SimpleFileVisitor;
import java.nio.file.attribute.BasicFileAttributes;
import java.util.Collection;
import java.util.HashMap;
import java.util.Map;

import org.apache.commons.cli.CommandLine;
import org.apache.commons.cli.CommandLineParser;
import org.apache.commons.cli.GnuParser;
import org.apache.commons.cli.Option;
import org.apache.commons.cli.Options;
import org.apache.commons.cli.ParseException;
import org.csu.cpp.output.CppBeautifier;
import org.csu.cpp.output.FileList;
import org.eclipse.emf.common.util.URI;
import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;
import org.eclipse.emf.ecore.resource.Resource;
import org.eclipse.emf.ecore.resource.ResourceSet;
import org.eclipse.emf.ecore.resource.impl.ResourceSetImpl;
import org.eclipse.emf.ecore.xmi.impl.EcoreResourceFactoryImpl;
import org.eclipse.internal.xpand2.pr.ProtectedRegionResolverImpl;
import org.eclipse.xpand2.XpandExecutionContextImpl;
import org.eclipse.xpand2.XpandFacade;
import org.eclipse.xpand2.output.Outlet;
import org.eclipse.xpand2.output.OutputImpl;
import org.eclipse.xpand2.output.NoChangesVetoStrategy;
import org.eclipse.xtend.expression.Variable;

public class Generator {
	private static String version = "1.1.0";
    private static String templatePath = "template::Main::main";

    public void generate(URI fileURI, String targetDir, String prSrcPaths, String ecPath,
			boolean internalLicense, boolean bootstrap, boolean clear) {

        ResourceSet rs = new ResourceSetImpl();
        rs.getResourceFactoryRegistry().getExtensionToFactoryMap().put("ecore",
                new EcoreResourceFactoryImpl());

        Resource resource = rs.getResource(fileURI, true);

        Map<String, Variable> globalVarsMap = new HashMap<String, Variable>();
        globalVarsMap.put("ecorePath", new Variable("ecorePath", ecPath+"/include/emf4cpp"));
        globalVarsMap.put("ecoreCppPath", new Variable("ecoreCppPath", ecPath+"/include/emf4cpp"));
        globalVarsMap.put("ecoreLibraryPath", new Variable("ecoreLibraryPath", ecPath+"/lib"));
        globalVarsMap.put("emf4cppVersion", new Variable("emf4cppVersion", version));
        globalVarsMap.put("internalLicense", new Variable("internalLicense", internalLicense));
        globalVarsMap.put("bootstrap", new Variable("bootstrap", bootstrap));

        // Configure outlets
        CppBeautifier cppBeautifier = new CppBeautifier();
        final FileList fileList = new FileList();

        OutputImpl output = new OutputImpl();
        NoChangesVetoStrategy vetoStrategy = new NoChangesVetoStrategy(); 
        Outlet outlet = new Outlet(targetDir);
        outlet.setOverwrite(true);
        outlet.addPostprocessor(cppBeautifier);
        if (clear)
			outlet.addPostprocessor(fileList);
        outlet.addVetoStrategy(vetoStrategy);
        output.addOutlet(outlet);
        // NOOVERWRITE
        outlet = new Outlet(targetDir);
        outlet.setName("NOOVERWRITE");
        outlet.setOverwrite(false);
        outlet.addPostprocessor(cppBeautifier);
        if (clear)
			outlet.addPostprocessor(fileList);
        output.addOutlet(outlet);

        // Protected regions
        ProtectedRegionResolverImpl pr = new ProtectedRegionResolverImpl();
        pr.setSrcPathes(prSrcPaths);

        // Execution context
        XpandExecutionContextImpl execCtx = new XpandExecutionContextImpl(
                output, pr, globalVarsMap, null, null);

//        EmfRegistryMetaModel metamodel = new EmfRegistryMetaModel() {
//            @Override
//            protected EPackage[] allPackages() {
//                return new EPackage[] { EcorePackage.eINSTANCE };
//            }
//        };
//        execCtx.registerMetaModel(metamodel);
        execCtx.registerMetaModel(new org.eclipse.xtend.type.impl.java.JavaBeansMetaModel());

        // Generate
        for (EObject eobj : resource.getContents()) {
            XpandFacade facade = XpandFacade.create(execCtx);
            facade.evaluate(templatePath, eobj);
        }

        if (clear) {
			String rootPackageName = ((EPackage)resource.getContents().get(0)).getName();
			Path start = FileSystems.getDefault().getPath(targetDir, rootPackageName);

			try {
				Files.walkFileTree(start, new SimpleFileVisitor<Path>() {
					@Override
					public FileVisitResult visitFile(Path file, BasicFileAttributes attrs)
							throws IOException
					{
						boolean fileInEcore = false;
						for (Path path : fileList.getFileList()) {
							if (Files.isSameFile(path,file)) {
								fileInEcore = true;
								break;
							}
						}

						if ( !fileInEcore ) {
							System.out.println("Remove orphaned file: " + file.toString());
							Files.delete(file);
						}

						return FileVisitResult.CONTINUE;
					}
				});
			} catch (IOException e) {
				System.err.println("Error while removing orphaned source code");
				System.err.println(e.getMessage());
				System.exit(1);
			}
        }
    }


    // Main
    public static void main(String[] args) {
        String filePath = null;
        String targetDir = System.getProperty("user.dir");
        String prSrcPaths = "";
        String ecPath = null;

        CommandLineParser parser = new GnuParser();
        CommandLine cmd = null;

        try {
            cmd = parser.parse(options, args);
        } catch (ParseException e) {
            System.err.println("Error parsing arguments");
            System.exit(1);
        }

        if (cmd.hasOption("V")) {
			System.out.println("emf4cpp " + version);
			System.out.println("Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>");
			System.out.println("License LGPLv3+: GNU LGPL version 3 or later <http://gnu.org/licenses/lgpl.html>.");
			System.out.println("EMF4CPP is free software: you can redistribute it and/or modify it.");
			System.out.println("There is NO WARRANTY, to the extent permitted by law.");
			System.exit(0);
        }

        if (cmd.hasOption("h")) {
            System.out.println("Options:");
            for (Option opt : (Collection<Option>) options.getOptions()) {
                System.out.println("-" + opt.getOpt() + "\t"
                        + opt.getDescription());
            }
            System.exit(0);
        }

        for (Option opt : cmd.getOptions()) {
            if (opt.getOpt() == "o")
                targetDir = opt.getValue();

            if (opt.getOpt() == "p")
                prSrcPaths += opt.getValue() + ",";

            if (opt.getOpt() == "e")
                ecPath = opt.getValue();
        }

        if (!cmd.hasOption("p"))
            prSrcPaths = targetDir;

        // Verbose
        if (!cmd.hasOption("v")) {
            // TODO
        }

        // ECORE file
        if (cmd.getArgList().size() == 1)
            filePath = (String) cmd.getArgList().get(0);
        else {
            System.err.println("No ECORE file specified or more than one.");
            System.exit(1);
        }

        new Generator().generate(URI.createFileURI(filePath), targetDir, prSrcPaths, ecPath,
				cmd.hasOption("i"), cmd.hasOption("b"), cmd.hasOption("c"));
    }

    private final static Options options = new Options(); // Command line
                                                          // options

    // Command line option
    static {
        // options.addOption(opt, hasArg, description);
        // options.addOption(opt, longOpt, hasArg, description);

        options.addOption("h", false, "Help.");
        options.addOption("v", false, "Verbose.");

        options.addOption("o", true,
			  "Output directory for the generated files. Default is current directory.");
        options.addOption("p", true,
			  "Protected regions directories. Default is output directory.");
        options.addOption("e", true,
			  "EMF4CPP path.");
        options.addOption("V", "version", false,
			  "Display version information and exit.");
        options.addOption("i", "internal", false,
			  "Add EMF4CPP license instead of more permissive end-user license.");
        options.addOption("b", "bootstrap", false,
			  "Activate special code needed to process the ecore model itself");
        options.addOption("c", "clear", false,
			  "Remove orphaned (source code) files after code generation");
    }
}
