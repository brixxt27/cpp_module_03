#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scav1("ScavTrap1");

	scav1.attack("clap1");	
	scav1.guardGate();
	scav1.takeDamage(10);
	scav1.beRepaired(1);
	scav1.takeDamage(100);
	scav1.attack("clap1");	
}
