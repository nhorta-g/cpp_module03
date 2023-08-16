#include "FragTrap.hpp"

int	main(void) {
	FragTrap frag("nice frag");
	ClapTrap clap("naughty clap");

	frag.highFivesGuys();
	std::cout << std::endl << "Ladies and gentelmen, the fight will now begin! "
		<< std::endl << std::endl << "In one corner... we have this mighty fragTrap called "
		<< frag.getName() << std::endl << "Hit points:    " << frag.getHitPoints()
		<< std::endl << "Energy points: " << frag.getEnergyPoints() << std::endl
		<< "Attack damage: " << frag.getAttackDamage() << std::endl <<std::endl <<
		"And in the other corner... we have this poor clapTrap called " << clap.getName()
		<< std::endl << "Hit points:    " << clap.getHitPoints() << std::endl <<
		"Energy points: " << clap.getEnergyPoints() << std::endl << "Attack damage: "
		<< clap.getAttackDamage() << std::endl;

	int i = 1;
	std::cout << std::endl;
	while (frag.getHitPoints() > 0 && clap.getHitPoints() > 0&&
		(frag.getEnergyPoints() || clap.getEnergyPoints())) {
		std::cout << "ROUND " << i << std::endl;

		if (clap.getHitPoints() > 0) {
			if (clap.getEnergyPoints() > 0) {
				clap.attack(frag.getName());
				frag.takeDamage(clap.getAttackDamage());
				frag.beRepaired(clap.getAttackDamage() / 2);
			}
			else
				std::cout << "Trap " << clap.getName() <<
				" can't attack or anything, he's out of energie!" << std::endl;
		}
		else
			std::cout << "Trap " << clap.getName() <<
				" is dead!!!" << std::endl;

		std::cout << std::endl;

		if (frag.getHitPoints() > 0) {
			if (frag.getEnergyPoints() > 0) {
				frag.attack(clap.getName());
				clap.takeDamage(frag.getAttackDamage());
				clap.beRepaired(frag.getAttackDamage() / 2);
			}
			else
				std::cout << "Trap " << frag.getName() <<
				" can't attack or anything, he's out of energie!" << std::endl;
		}
		else
			std::cout << "Trap " << frag.getName() <<
				" is dead!!!" << std::endl;
		std::cout << std::endl;
		i++;
	}
}
