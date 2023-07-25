#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap scav("John");
	ClapTrap clap("David");

	std::cout << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << "ROUND " << i << std::endl;

		if (clap.getHitPoints() > 0) {
			clap.attack(scav.getName());
			scav.takeDamage(clap.getAttackDamage());
			scav.beRepaired(clap.getAttackDamage());
		}
		else
			std::cout << "Clap" << cla_name

		std::cout << std::endl;

		scav.attack(clap.getName());
		clap.takeDamage(scav.getAttackDamage());
		clap.beRepaired(scav.getAttackDamage());
		std::cout << std::endl;
	}
}
