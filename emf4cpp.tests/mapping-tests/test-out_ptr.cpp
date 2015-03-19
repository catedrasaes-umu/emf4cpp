#include <ecorecpp/mapping/out_ptr.hpp>
#include <ecorecpp/mapping/any.hpp>
#include <iostream>

using namespace ecorecpp::mapping;

int main()
{
	any _any;

	out_ptr< int > a(new int);

	*a = 10;

	_any = a;

	out_ptr< int > b = any::any_cast< out_ptr< int > >(_any);

	std::cout << *b << std::endl;
}

