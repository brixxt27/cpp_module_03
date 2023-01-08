#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	Diamond1("Diamond1");

	Diamond1.attack("scav1");	
	Diamond1.highFivesGuys();
	Diamond1.takeDamage(10);
	Diamond1.beRepaired(1);
	Diamond1.takeDamage(100);
	Diamond1.highFivesGuys();

	DiamondTrap	Diamond2(Diamond1);

	Diamond2.attack("clap1");	
	Diamond2.highFivesGuys();
}
