#include "ClapTrap.hpp"
#include <iostream>
#include "iomanip"

ClapTrap::ClapTrap(std::string name)
	: _name(name)
	, _hit_point(10)
	, _energy_point(10)
	, _attack_damage(0)
{
	std::cout << "ClapTrap's constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hit_point, unsigned int energy_point, unsigned int attack_damage)
	: _name(name)
	, _hit_point(hit_point)
	, _energy_point(energy_point)
	, _attack_damage(attack_damage)
{
	std::cout << "ClapTrap's constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	: _name(other._name)
	, _hit_point(other._hit_point)
	, _energy_point(other._energy_point)
	, _attack_damage(other._attack_damage)
{
	std::cout << "ClapTrap's copy constructor is called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs)
{
	std::cout << "ClapTrap's copy assignment operator is called" << std::endl;

	if (this != &rhs)
	{
		_name = rhs._name;
		_hit_point = rhs._hit_point;
		_energy_point = rhs._energy_point;
		_attack_damage = rhs._attack_damage;
	}

	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap's destructor is called" << std::endl;
}


void	ClapTrap::attack(const std::string& target)
{
	if (CanIDoAnything() == false)
	{
		PrintImmovable();
		return;
	}

	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;

	--_energy_point;

	PrintStatus();
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (CanIDoAnything() == false)
	{
		PrintImmovable();
		return;
	}

	if (_hit_point < amount)
		_hit_point = 0;
	else
		_hit_point -= amount;

	std::cout << "ClapTrap " << _name << " take damage " << amount << " points!" << std::endl;

	PrintStatus();
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (CanIDoAnything() == false)
	{
		PrintImmovable();
		return;
	}

	_hit_point += amount;

	std::cout << "ClapTrap " << _name << " repair myself " << amount << " points!" << std::endl;
	
	--_energy_point;
	
	PrintStatus();
}

std::string	ClapTrap::GetName() const
{
	return _name;
}

unsigned int	ClapTrap::GetAttackDamage() const
{
	return _attack_damage;
}

bool	ClapTrap::CanIDoAnything() const
{
	return (_hit_point != 0 && _energy_point != 0);
}

void	ClapTrap::PrintImmovable() const
{
	std::cout << "I can't do anything!" << std::endl;
	PrintStatus();
}

void	ClapTrap::PrintStatus() const
{
	std::cout << "\n*" << std::endl;
	std::cout << "I am " << _name << std::endl;
	std::cout << "Hit point is " << _hit_point << std::endl;
	std::cout << "Energy point is " << _energy_point << std::endl;
	std::cout << "*\n" << std::endl;
}

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap's default constructor" << std::endl;
}
