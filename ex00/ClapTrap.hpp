#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);
	ClapTrap&	operator=(const ClapTrap& rhs);
	virtual ~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	
private:
	std::string		_name;
	unsigned int	_hit_point;
	unsigned int	_energy_point;
	unsigned int	_attack_damage;

	bool	CanIDoAnything() const;
	void	PrintImmovable() const;
	void	PrintStatus() const;
};

#endif
