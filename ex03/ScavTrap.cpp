#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name, HIT_POINT, ENERGY_POINT, ATTACK_DAMAGE)
{
	std::cout << "ScavTrap's constructor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap(other._name, other._hit_point, other._energy_point, other._attack_damage)
{
	std::cout << "ScavTrap's copy constructor is called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{
	std::cout << "ScavTrap's copy assignment operator is called" << std::endl;

	if (this != &rhs)
	{
		_name = rhs._name;
		_hit_point = rhs._hit_point;
		_energy_point = rhs._energy_point;
		_attack_damage = rhs._attack_damage;
	}
	
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap's destructor is called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (CanIDoAnything() == false)
	{
		PrintImmovable();
		return;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;

	--_energy_point;
	
	PrintStatus();
}

void	ScavTrap::guardGate()
{
	if (CanIDoAnything() == false)
	{
		PrintImmovable();
		return;
	}

	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
	PrintStatus();
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap's default constructor" << std::endl;
}
