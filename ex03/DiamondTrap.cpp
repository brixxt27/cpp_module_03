#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name, 100, 50, 30)
{
}

//DiamondTrap::DiamondTrap(const DiamondTrap& other)
//{

//}

//DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs)
//{

//}

//DiamondTrap::~DiamondTrap()
//{

//}

//void	DiamondTrap::whoAmI()
//{

//}

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap's default constructor" << std::endl;
}
