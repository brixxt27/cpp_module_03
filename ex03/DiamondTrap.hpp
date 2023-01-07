#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap(std::string name);
	// DiamondTrap(const DiamondTrap& other);
	// DiamondTrap&	operator=(const DiamondTrap& rhs);
	// virtual ~DiamondTrap();

	// void	whoAmI();

protected:
	std::string	_name;

	DiamondTrap();
};

#endif
