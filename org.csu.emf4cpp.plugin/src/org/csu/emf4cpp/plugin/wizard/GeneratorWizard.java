package org.csu.emf4cpp.plugin.wizard;

import org.eclipse.jface.wizard.Wizard;

public class GeneratorWizard extends Wizard {

    GenerationParametersPage genParamsPage;

    public void addPages() {
        genParamsPage = new GenerationParametersPage(
                "EMF4CPP Generation Pararametes Page");
        addPage(genParamsPage);
    }

    private String ecPath = null;
    private String targetDir = null;
    
    public String getECPath()
    {
        return ecPath;
    }
    
    public String getTargeDir()
    {
        return targetDir;
    }
    
    @Override
    public boolean performFinish() {
        
        ecPath = genParamsPage.getECPath();
        targetDir = genParamsPage.getTargeDir();
        
        return true;
    }

}
