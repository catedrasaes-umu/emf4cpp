package org.csu.emf4cpp.generator;

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
import org.eclipse.emf.common.util.URI;
import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;
import org.eclipse.emf.ecore.EcorePackage;
import org.eclipse.emf.ecore.resource.Resource;
import org.eclipse.emf.ecore.resource.ResourceSet;
import org.eclipse.emf.ecore.resource.impl.ResourceSetImpl;
import org.eclipse.emf.ecore.xmi.impl.EcoreResourceFactoryImpl;
import org.eclipse.internal.xpand2.pr.ProtectedRegionResolverImpl;
import org.eclipse.xpand2.XpandExecutionContextImpl;
import org.eclipse.xpand2.XpandFacade;
import org.eclipse.xpand2.output.Outlet;
import org.eclipse.xpand2.output.OutputImpl;
import org.eclipse.xtend.expression.Variable;
import org.eclipse.xtend.typesystem.emf.EmfRegistryMetaModel;

public class Generator {
    private static String templatePath = "template::Main::main";

    public void generate(URI fileURI, String targetDir, String prSrcPaths, String ecPath) {

        ResourceSet rs = new ResourceSetImpl();
        rs.getResourceFactoryRegistry().getExtensionToFactoryMap().put("ecore",
                new EcoreResourceFactoryImpl());
        
        Resource resource = rs.getResource(fileURI, true);

        Map<String, Variable> globalVarsMap = new HashMap<String, Variable>();
        globalVarsMap.put("ecorePath", new Variable("ecorePath", ecPath));
        globalVarsMap.put("ecoreCppPath", new Variable("ecoreCppPath", ecPath));

        // Configure outlets
        CppBeautifier cppBeautifier = new CppBeautifier();
        OutputImpl output = new OutputImpl();
        Outlet outlet = new Outlet(targetDir);
        outlet.setOverwrite(true);
        outlet.addPostprocessor(cppBeautifier);
        output.addOutlet(outlet);
        // NOOVERWRITE
        outlet = new Outlet(targetDir);
        outlet.setName("NOOVERWRITE");
        outlet.setOverwrite(false);
        outlet.addPostprocessor(cppBeautifier);
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

        new Generator().generate(URI.createFileURI(filePath), targetDir, prSrcPaths, ecPath);
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
    }
}
