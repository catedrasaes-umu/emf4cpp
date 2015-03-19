#include <ecorecpp.hpp>
#include <ecore/EcorePackage.hpp>
#include <fstream>

using namespace ecore;

int main(int argc, char* argv[])
{
    EcoreFactory_ptr ecoreFactory =
            EcoreFactory::_instance()->as< EcoreFactory > ();
    EcorePackage_ptr ecorePackage =
            EcorePackage::_instance()->as< EcorePackage > ();

    // Create a Company class
    EClass_ptr companyClass = ecoreFactory->createEClass();
    companyClass->setName("Company");

    // Add name attribute to a Company class
    EAttribute_ptr companyName = ecoreFactory->createEAttribute();
    companyName->setName("name");
    companyName->setEType(ecorePackage->getEString());
    companyClass->getEStructuralFeatures().push_back(companyName);

    // Create an Employee class
    EClass_ptr employeeClass = ecoreFactory->createEClass();
    employeeClass->setName("Employee");

    // Add a name attribute to an Employee class
    EAttribute_ptr employeeName = ecoreFactory->createEAttribute();
    employeeName->setName("name");
    employeeName->setEType(ecorePackage->getEString());
    employeeClass->getEStructuralFeatures().push_back(employeeName);

    // Create a Departament class
    EClass_ptr departmentClass = ecoreFactory->createEClass();
    departmentClass->setName("Department");

    // Add department identification number
    EAttribute_ptr departmentNumber = ecoreFactory->createEAttribute();
    departmentNumber->setName("number");
    departmentNumber->setEType(ecorePackage->getEInt());
    departmentClass->getEStructuralFeatures().push_back(departmentNumber);

    // Department class can contain reference to one or many employees
    EReference_ptr departmentEmployees = ecoreFactory->createEReference();
    departmentEmployees->setName("employees");
    departmentEmployees->setEType(employeeClass);

    // Specify that it could be one or more employees
    departmentEmployees->setUpperBound(-1);
    departmentEmployees->setContainment(true);
    departmentClass->getEStructuralFeatures().push_back(departmentEmployees);

    // One of the department employees must be the manager
    EReference_ptr departmentManager = ecoreFactory->createEReference();
    departmentManager->setName("manager");
    departmentManager->setEType(employeeClass);
    departmentManager->setLowerBound(1);
    departmentClass->getEStructuralFeatures().push_back(departmentManager);

    // Company can contain reference to one or more departments
    EReference_ptr companyDepartments = ecoreFactory->createEReference();
    companyDepartments->setName("department");
    companyDepartments->setEType(departmentClass);
    companyDepartments->setUpperBound(-1);
    companyDepartments->setContainment(true);
    companyClass->getEStructuralFeatures().push_back(companyDepartments);

    // Create a package that represents company
    EPackage_ptr companyPackage = ecoreFactory->createEPackage();
    companyPackage->setName("company");
    companyPackage->setNsPrefix("company");
    companyPackage->setNsURI("http:///com.example.company.ecore");
    companyPackage->getEClassifiers().push_back(employeeClass);
    companyPackage->getEClassifiers().push_back(departmentClass);
    companyPackage->getEClassifiers().push_back(companyClass);

    // Initialize the package
    companyPackage->_initialize();

    // Serialize
    std::ofstream outfile ("salida.xmi");
    ::ecorecpp::serializer::serializer _ser(outfile);
    _ser.serialize(companyPackage);

    delete companyPackage;
}

