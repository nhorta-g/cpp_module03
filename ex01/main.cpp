#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap bot1("David");
	ClapTrap bot2("John");

	for (int i = 1; i < 10; i++) {
		std::cout << std::endl << "ROUND " << i << std::endl;
		bot1.attack(bot2.getName());
		bot2.attack(bot1.getName());
		if (bot1.getEnergyPoints())
			bot2.takeDamage(bot1.getAttackDamage());
		bot2.beRepaired(bot1.getAttackDamage());
		if (bot2.getEnergyPoints())
			bot1.takeDamage(bot2.getAttackDamage());
		bot1.beRepaired(bot2.getAttackDamage());
	}
}
