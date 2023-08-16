#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap diamond("nice diamond");
	ClapTrap clap("naughty clap");

	diamond.highFivesGuys();
	std::cout << std::endl << "Ladies and gentelmen, the fight will now begin! "
		<< std::endl << std::endl << "in one corner we have this mighty diamondTrap called "
		<< diamond.getName() << std::endl << "Hit points:    " << diamond.getHitPoints()
		<< std::endl << "Energy points: " << diamond.getEnergyPoints() << std::endl
		<< "Attack damage: " << diamond.getAttackDamage() << std::endl <<std::endl <<
		"in the other corner we have this poor clapTrap called " << clap.getName()
		<< std::endl << "Hit points:    " << clap.getHitPoints() << std::endl <<
		"Energy points: " << clap.getEnergyPoints() << std::endl << "Attack damage: "
		<< clap.getAttackDamage() << std::endl;

	int i = 1;
	std::cout << std::endl;
	while (diamond.getHitPoints() > 0 && clap.getHitPoints() > 0&&
		(diamond.getEnergyPoints() || clap.getEnergyPoints())) {
		std::cout << "ROUND " << i << std::endl;

		if (clap.getHitPoints() > 0) {
			if (clap.getEnergyPoints() > 0) {
				clap.attack(diamond.getName());
				diamond.takeDamage(clap.getAttackDamage());
				diamond.beRepaired(clap.getAttackDamage() / 2);
			}
			else
				std::cout << "Trap " << clap.getName() <<
				" can't attack or anything, he's out of energie!" << std::endl;
		}
		else
			std::cout << "Trap " << clap.getName() <<
				" is dead!!!" << std::endl;

		std::cout << std::endl;

		if (diamond.getHitPoints() > 0) {
			if (diamond.getEnergyPoints() > 0) {
				diamond.attack(clap.getName());
				clap.takeDamage(diamond.getAttackDamage());
				clap.beRepaired(diamond.getAttackDamage() / 2);
			}
			else
				std::cout << "Trap " << diamond.getName() <<
				" can't attack or anything, he's out of energie!" << std::endl;
		}
		else
			std::cout << "Trap " << diamond.getName() <<
				" is dead!!!" << std::endl;
		std::cout << std::endl;
		i++;
	}
}
