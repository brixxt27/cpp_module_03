#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Clap1");

	a.attack("Clap2");
	a.beRepaired(1);
	a.takeDamage(15);
	a.attack("Clap2");
	a.beRepaired(3);
}
