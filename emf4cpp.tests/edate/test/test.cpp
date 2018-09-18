#include <ecorecpp.hpp>
#include "../edate.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
	using ::ecorecpp::mapping::EDate;
    EDate edate1("1972-01-25T05:27:55.000+0700");
	std::cout << EDate::toISOString(edate1);

	std::time_t timeT = edate1.mktime();
	EDate edate2(timeT);

	std::cout << " to localtime: "
		      << EDate::toISOString(edate2) << std::endl;

	::edate::EdateFactory_ptr edateFactory =  ::edate::EdateFactory::_instance();
	::edate::Apollo11_ptr apollo11 = edateFactory->createApollo11();

	std::cout << "First man on moon (default value literal): "
		      << EDate::toISOString(apollo11->getFirstManOnMoonDate()) << std::endl;

	::edate::Person_ptr person = edateFactory->createPerson();
	apollo11->setMember(person);
	EDate birthday = person->getBirthday();

	std::cout << "Birthday (not set): " << EDate::toISOString(birthday) << std::endl;

	person->setBirthday(EDate("1992-05-23T06:23:00.000+0100"));
	birthday = person->getBirthday();
	std::cout << "Birthday: " << EDate::toISOString(birthday) << std::endl;
}
