#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap scav("John");
	ClapTrap clap("David");

	std::cout << std::endl << "Ladies and gentelmen, the fight will now begin! "
		<< std::endl << "in one corner we have this mighty ScavTrap:"
		<< std::endl << scav.getName() << std::endl << "Hit points:    "
		<< scav.getHitPoints() << std::endl << "Energy points: "
		<< scav.getEnergyPoints() << std::endl << "Attack damage: "
		<< scav.getAttackDamage() << std::endl <<std::endl <<
		"in the other corner we have this poor clapTrap:"
		<< std::endl << scav.getName() << std::endl << "Hit points:    "
		<< clap.getHitPoints() << std::endl << "Energy points: "
		<< clap.getEnergyPoints() << std::endl << "Attack damage: "
		<< clap.getAttackDamage() << std::endl;

	int i = 1;
	std::cout << std::endl;
	while (scav.getHitPoints() && clap.getHitPoints()) {
		std::cout << "ROUND " << i << std::endl;

		if (clap.getHitPoints() > 0) {
			clap.attack(scav.getName());
			scav.takeDamage(clap.getAttackDamage());
			scav.beRepaired(clap.getAttackDamage() / 2);
		}
		else
			std::cout << "Clap " << clap.getName() <<
				" can't attack because he's dead" << std::endl;

		std::cout << std::endl;

		if (clap.getHitPoints() > 0) {
			scav.attack(clap.getName());
			clap.takeDamage(scav.getAttackDamage());
			clap.beRepaired(scav.getAttackDamage() / 2);
			std::cout << std::endl;
		}
		else
			std::cout << "Clap " << clap.getName() <<
				" can't attack because he's dead" << std::endl;
		i++;
	}
}

