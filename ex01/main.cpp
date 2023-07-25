#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap scav("John");
	ClapTrap clap("David");

	std::cout << std::endl;
	for (int i = 1; i < 3; i++) {
		std::cout << "ROUND " << i << std::endl;
		clap.attack(scav.getName());
		if (scav.getEnergyPoints())
			scav.takeDamage(clap.getAttackDamage());
		scav.beRepaired(clap.getAttackDamage());
		std::cout << std::endl;
	}
}
