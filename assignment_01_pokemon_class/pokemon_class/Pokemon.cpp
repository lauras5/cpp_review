/*
	Salcido, Laura

	September, 10 2020

	CS A250
	A2 - Pokemon Class
*/

#include <string>
#include <iostream>

#include "Pokemon.h"

using namespace std;

string Pokemon::getType1() const
{
    return type;
}

string Pokemon::getType2() const
{
    return secondType;
}

bool Pokemon::commonType(const Pokemon &obj) const
{
    if (obj.type == type || obj.type == secondType || obj.secondType == type || (obj.secondType == secondType && secondType != ""))
    {
        return 1;
    }
    return 0;
}

void Pokemon::print() const
{
    std::cout << pokemon << ": " << type;
    if (secondType != "")
    {
        std::cout << " " << secondType;
    }
}
