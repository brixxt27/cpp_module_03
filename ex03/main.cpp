#include "DiamondTrap.hpp"

int	main(void)
{
	FragTrap	frag1("frag1");

	frag1.attack("clap1");	
	frag1.attack("scav1");	
	frag1.highFivesGuys();
	frag1.takeDamage(10);
	frag1.beRepaired(1);
	frag1.takeDamage(100);
	frag1.attack("clap1");	
	frag1.highFivesGuys();
}
