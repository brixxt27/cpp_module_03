#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
	: ClapTrap(name, HIT_POINT, ENERGY_POINT, ATTACK_DAMAGE)
{
	std::cout << "FragTrap's constructor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
	: ClapTrap(other._name, other._hit_point, other._energy_point, other._attack_damage)
{
	std::cout << "FragTrap's copy constructor is called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << "FragTrap's copy assignment operator is called" << std::endl;

	if (this != &rhs)
	{
		_name = rhs._name;
		_hit_point = rhs._hit_point;
		_energy_point = rhs._energy_point;
		_attack_damage = rhs._attack_damage;
	}
	
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap's destructor is called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (CanIDoAnything() == false)
	{
		PrintImmovable();
		return;
	}

	std::cout << "FragTrap is request a positive high fives!" << std::endl;
	PrintStatus();
}

FragTrap::FragTrap()
{
	std::cout << "FragTrap's default constructor" << std::endl;
}
