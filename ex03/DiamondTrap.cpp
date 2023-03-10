#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name", HIT_POINT, ENERGY_POINT, ATTACK_DAMAGE)
	, ScavTrap()
	, FragTrap()
	, _name(name)
{
	std::cout << "DiamondTrap's constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ClapTrap(other.ClapTrap::_name, other._hit_point, other._energy_point, other._attack_damage)
	, ScavTrap()
	, FragTrap()
	, _name(other._name)
{
	std::cout << "DiamondTrap's copy constructor is called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs)
{
	std::cout << "DiamondTrap's copy assignment operator is called" << std::endl;

	if (this != &rhs)
	{
		_name = rhs._name;
		_hit_point = rhs._hit_point;
		_energy_point = rhs._energy_point;
		_attack_damage = rhs._attack_damage;
		ClapTrap::_name = rhs.ClapTrap::_name;
	}

	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap's destructor is called" << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	if (CanIDoAnything() == false)
	{
		PrintImmovable();
		return;
	}

	std::cout << "\nWWWWWWWWWWWho AAAAAAAAAAAm IIIIIIIII" << std::endl;
	std::cout << "My name is " << _name << std::endl
	<< "Parent ClapTrap's name is " << ClapTrap::_name << std::endl;
	std::cout << "WWWWWWWWWWWho AAAAAAAAAAAm IIIIIIIII\n" << std::endl;
}

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap's default constructor" << std::endl;
}
