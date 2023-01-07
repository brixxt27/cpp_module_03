#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
public:
	ClapTrap(std::string name);
	ClapTrap(std::string name, unsigned int hit_point, unsigned int energy_point, unsigned int attack_damage);
	ClapTrap(const ClapTrap& other);
	ClapTrap&	operator=(const ClapTrap& rhs);
	virtual ~ClapTrap();

	virtual void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	GetName() const;
	unsigned int 	GetAttackDamage() const;

	//void	SetName(std::string name);
	//void	SetHitPoint(unsigned int hit_point);
	//void	SetEnergyPoint(unsigned int energy_point);
	//void	SetAttackDamage(unsigned int attack_point);
	
protected:
	std::string		_name;
	unsigned int	_hit_point;
	unsigned int	_energy_point;
	unsigned int	_attack_damage;

	bool	CanIDoAnything() const;
	void	PrintImmovable() const;
	void	PrintStatus() const;
};

#endif
