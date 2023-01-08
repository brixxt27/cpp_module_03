#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);
	ScavTrap&	operator=(const ScavTrap& rhs);
	virtual ~ScavTrap();

	virtual void	attack(const std::string& target);
	void			guardGate();

protected:
	ScavTrap();

	enum e_attribute
	{
		HIT_POINT = 100,
		ENERGY_POINT = 50,
		ATTACK_DAMAGE = 20
	};
};

#endif
