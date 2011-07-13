// -*- mode: c++; c-basic-offset: 4; c-basic-style: bsd; -*-
#include <ecorecpp.hpp>
#include <company.hpp>
#include <fstream>
#include <memory> // for std::auto_ptr

using namespace company;
using namespace ecore;

int main(int argc, char* argv[])
{
    CompanyPackage_ptr companyPackage = CompanyPackage::_instance()->as< CompanyPackage >();
    CompanyFactory_ptr companyFactory = CompanyFactory::_instance()->as< CompanyFactory >();

    {
        std::auto_ptr<Company> umu ( companyFactory->createCompany());
        umu->setName("UMU");

        Department_ptr catedraSAES = companyFactory->createDepartment();
        catedraSAES->setNumber(8515);

        Employee_ptr asenac = companyFactory->createEmployee();
        asenac->setName("Andres Senac");
        catedraSAES->getEmployees().push_back(asenac);

        Employee_ptr dsevilla = companyFactory->createEmployee();
        dsevilla->setName("Diego Sevilla");
        catedraSAES->getEmployees().push_back(dsevilla);
        catedraSAES->setManager(dsevilla);

        umu->getDepartments().push_back(catedraSAES);

        umu->_initialize();

        std::ofstream outfile ("UMU.xmi");
        ecorecpp::serializer::serializer _ser(outfile);
        _ser.serialize(umu.get());
        outfile.close();
    }


    ::ecorecpp::MetaModelRepository::_instance()->load(companyPackage);

    ecorecpp::parser::parser _dser;
    EObject_ptr eobj = _dser.load ("UMU.xmi");

    {
        std::auto_ptr<Company> umu (eobj->as< Company >());
    }
}

