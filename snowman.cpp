#include "snowman.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>
using namespace std;


void throwException(unsigned int num)
{	
	throw std::invalid_argument( "Invalid code" );

}

void validateNumber( int num)
{
	 int tempNum = num;
	int counter = 0;
	while (tempNum != 0) {
		counter++;
		int digit = tempNum % 10;
		if (digit < 1 || digit >4)
		{
			throwException(num);
		}
		tempNum /= 10;
	}
	if (counter != 8)
	{
			throwException(num);
	}
}
namespace ariel{
string snowman(int num) {
	validateNumber(num);
	return "_===_\n"
			"(.,.)\n"
			"( : )\n"
			"( : )";

}
}
