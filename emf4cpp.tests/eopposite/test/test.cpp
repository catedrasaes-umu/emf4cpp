// -*- mode: c++; c-basic-offset: 4; c-basic-style: bsd; -*-
#include <ecorecpp.hpp>
#include <eopposite.hpp>
#include <fstream>
#include <memory> // for std::auto_ptr
#include <assert.h>

using namespace eopposite;
using namespace ecore;

int main(int argc, char* argv[])
{
    EoppositePackage_ptr eoppositePackage = EoppositePackage::_instance()->as< EoppositePackage >();
    EoppositeFactory_ptr eoppositeFactory = EoppositeFactory::_instance()->as< EoppositeFactory >();

    {
        std::shared_ptr<TopLevel> tl ( eoppositeFactory->createTopLevel());
        tl->setName("MyTopLevel");

        LeftHand_ptr myLeft = eoppositeFactory->createLeftHand();
		myLeft->setName("leftyNo1");

        RightHand_ptr myRight = eoppositeFactory->createRightHand();
		myRight->setName("rightyNo1");

		tl->getLeftees().push_back(myLeft);
		tl->getRightees().push_back(myRight);

		assert( myLeft->getRightee() == nullptr );
		assert( myRight->getLeftee() == nullptr );

		/* setRightee() automatically calls setLeftee() on opposite end */
		myLeft->setRightee(myRight);

		assert( myLeft->eContainer() == tl.get() );
		assert( myRight->eContainer() == tl.get() );

		assert( myLeft->getRightee() == myRight );
		assert( myRight->getLeftee() == myLeft );

		{
			std::ofstream outfile ("myTopLevel.xmi");
			ecorecpp::serializer::serializer _ser(outfile);
			_ser.serialize(tl.get());
			outfile.close();
		}

		/* Clearing one side must clear the other side, too. */
		myLeft->setRightee(nullptr);
		assert( myLeft->getRightee() == nullptr );
		assert( myRight->getLeftee() == nullptr );
		myRight->setLeftee(myLeft);

		RightMultiple_ptr rm = eoppositeFactory->createRightMultiple();
		tl->getRightMultiples().push_back(rm);
		LeftHand_ptr myLeft2 = eoppositeFactory->createLeftHand();
		tl->getLeftees().push_back(myLeft2);
		myLeft2->setName("leftyNo2");

		assert( myLeft2->getRightMultiple() == nullptr );
		rm->getLeftees().push_back(myLeft2);
		rm->getLeftees().push_back(myLeft);
		assert( myLeft2->getRightMultiple() == rm );

 		{
			std::ofstream outfile ("myTopLevel2.xmi");
			ecorecpp::serializer::serializer _ser(outfile);
			_ser.serialize(tl.get());
			outfile.close();
		}

		auto it = std::find(rm->getLeftees().begin(), rm->getLeftees().end(), myLeft2);
		assert( *it == myLeft2 );

		myLeft2->setRightMultiple(nullptr);
		it = std::find(rm->getLeftees().begin(), rm->getLeftees().end(), myLeft2);
		assert( it == rm->getLeftees().end() );

		myLeft2->setRightMultiple(rm);
		it = std::find(rm->getLeftees().begin(), rm->getLeftees().end(), myLeft2);
		assert( *it == myLeft2 );				
	}


    ::ecorecpp::MetaModelRepository::_instance()->load(eoppositePackage);

    ecorecpp::parser::parser _dser;
    EObject_ptr eobj = _dser.load ("myTopLevel.xmi");

    {
        std::shared_ptr<TopLevel> tl (eobj->as< TopLevel >());
    }
}

