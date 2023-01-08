#pragma once
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap& other);
	FragTrap&	operator=(const FragTrap& rhs);
	virtual ~FragTrap();

	void highFivesGuys(void);

protected:
	FragTrap();

	enum e_attribute
	{
		HIT_POINT = 100,
		ENERGY_POINT = 100,
		ATTACK_DAMAGE = 30
	};
};

#endif
