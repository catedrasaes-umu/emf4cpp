package org.csu.emf4cpp.plugin.popup.actions;

import org.csu.emf4cpp.generator.Generator;
import org.csu.emf4cpp.plugin.wizard.GeneratorWizard;
import org.eclipse.core.resources.IFile;
import org.eclipse.core.resources.IProject;
import org.eclipse.core.resources.IResource;
import org.eclipse.emf.common.util.URI;
import org.eclipse.jface.action.IAction;
import org.eclipse.jface.viewers.ISelection;
import org.eclipse.jface.viewers.IStructuredSelection;
import org.eclipse.jface.window.Window;
import org.eclipse.jface.wizard.WizardDialog;
import org.eclipse.swt.widgets.Shell;
import org.eclipse.ui.IActionDelegate;
import org.eclipse.ui.IObjectActionDelegate;
import org.eclipse.ui.IWorkbenchPart;
import org.eclipse.ui.IWorkbenchWindow;
import org.eclipse.ui.PlatformUI;

public class GenerateWithWizard implements IObjectActionDelegate {

    private Shell shell;

    /**
     * Constructor for Action1.
     */
    public GenerateWithWizard() {
        super();
    }

    /**
     * @see IObjectActionDelegate#setActivePart(IAction, IWorkbenchPart)
     */
    public void setActivePart(IAction action, IWorkbenchPart targetPart) {
        shell = targetPart.getSite().getShell();
    }

    /**
     * @see IActionDelegate#run(IAction)
     */
    public void run(IAction action) {
        System.out.println("INICIO");

        GeneratorWizard wizard = new GeneratorWizard();
        WizardDialog dialog = new WizardDialog(shell, wizard);
        dialog.create();
        int res = dialog.open();
        
        if(res == Window.CANCEL)
            return;
            
        try {
            final IWorkbenchWindow workbenchWindow = PlatformUI.getWorkbench()
                    .getActiveWorkbenchWindow();
            final Object selection = ((IStructuredSelection) workbenchWindow
                    .getSelectionService().getSelection()).getFirstElement();
            final IFile fileSelection = (IFile) selection;
            final IProject project = fileSelection.getProject();

            // final String projectPath = project.getLocationURI().getPath();
            // final String targetDir = projectPath + "/src-gen";
            // final String prSrcPaths = projectPath + "/src-gen";

            // TODO: create targetDir

            final String targetDir = wizard.getTargeDir();
            
            Generator generator = new Generator();
            generator.generate(URI.createPlatformResourceURI(fileSelection.getFullPath().toString(), true),
                    targetDir, targetDir, wizard.getECPath());

            // Refresh the current project
            project.refreshLocal(IResource.DEPTH_INFINITE, null);

        } catch (Exception e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }

        System.out.println("FIN");
    }

    /**
     * @see IActionDelegate#selectionChanged(IAction, ISelection)
     */
    public void selectionChanged(IAction action, ISelection selection) {
    }

}
