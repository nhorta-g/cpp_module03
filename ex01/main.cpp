#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap scav("John");
	ClapTrap clap("David");

	std::cout << std::endl << "Ladies and gentelmen, the fight will now begin! "
		<< std::endl << std::endl << "in one corner we have this mighty ScavTrap called "
		<< scav.getName() << std::endl << "Hit points:    " << scav.getHitPoints()
		<< std::endl << "Energy points: " << scav.getEnergyPoints() << std::endl
		<< "Attack damage: " << scav.getAttackDamage() << std::endl <<std::endl <<
		"in the other corner we have this poor clapTrap called " << clap.getName()
		<< std::endl << "Hit points:    " << clap.getHitPoints() << std::endl <<
		"Energy points: " << clap.getEnergyPoints() << std::endl << "Attack damage: "
		<< clap.getAttackDamage() << std::endl;

	scav.guardGate();
	int i = 1;
	std::cout << std::endl;
	while (scav.getHitPoints() > 0 && clap.getHitPoints() > 0&&
		(scav.getEnergyPoints() || clap.getEnergyPoints())) {
		std::cout << "ROUND " << i << std::endl;

		if (clap.getHitPoints() > 0) {
			if (clap.getEnergyPoints() > 0) {
				clap.attack(scav.getName());
				scav.takeDamage(clap.getAttackDamage());
				scav.beRepaired(clap.getAttackDamage() / 2);
			}
			else
				std::cout << "Trap " << clap.getName() <<
				" can't attack or anything, he's out of energie!" << std::endl;
		}
		else
			std::cout << "Trap " << clap.getName() <<
				" is dead!!!" << std::endl;

		std::cout << std::endl;

		if (scav.getHitPoints() > 0) {
			if (scav.getEnergyPoints() > 0) {
				scav.attack(clap.getName());
				clap.takeDamage(scav.getAttackDamage());
				clap.beRepaired(scav.getAttackDamage() / 2);
			}
			else
				std::cout << "Trap " << scav.getName() <<
				" can't attack or anything, he's out of energie!" << std::endl;
		}
		else
			std::cout << "Trap " << scav.getName() <<
				" is dead!!!" << std::endl;
		std::cout << std::endl;
		i++;
	}
}
