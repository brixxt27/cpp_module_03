#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
public:
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap&	operator=(const DiamondTrap& rhs);
	virtual ~DiamondTrap();

	// void	whoAmI();

protected:
	std::string	_name;

	DiamondTrap();

	enum e_attribute
	{
		HIT_POINT = FragTrap::HIT_POINT,
		ENERGY_POINT = ScavTrap::ENERGY_POINT,
		ATTACK_DAMAGE = FragTrap::ATTACK_DAMAGE
	};
};

#endif
