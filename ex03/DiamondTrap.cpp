#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name", HIT_POINT, ENERGY_POINT, ATTACK_DAMAGE)
	, ScavTrap()
	, FragTrap()
	, _name(name)
{
	// 출력문 필요
	ScavTrap::_name = "1";
	_name = "2";
}

//DiamondTrap::DiamondTrap(const DiamondTrap& other)
//{

//}

//DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs)
//{

//}

// DiamondTrap::~DiamondTrap()
// {
	
// }

//void	DiamondTrap::whoAmI()
//{

//}

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap's default constructor" << std::endl;
}
