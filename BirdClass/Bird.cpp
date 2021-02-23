#include "Bird.h"
#include <iostream>

Bird::Bird() : _name("Lucas")
{
}

void Bird::Sing()
{
	std::cout << "Hello my name is " << _name << std::endl;
}
