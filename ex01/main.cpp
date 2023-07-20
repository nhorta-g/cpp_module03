#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap clap1("David");
	ClapTrap clap2("John");
	ClapTrap scav1("John");

	for (int i = 1; i < 10; i++) {
		std::cout << std::endl << "ROUND " << i << std::endl;
		clap1.attack(scav1.getName());
		clap2.attack(scav1.getName());
		if (scav1.getEnergyPoints())
			scav1.takeDamage(clap1.getAttackDamage());
		scav1.beRepaired(clap1.getAttackDamage());
		if (scav1.getEnergyPoints())
			clap1.takeDamage(clap2.getAttackDamage());
		scav1.beRepaired(clap2.getAttackDamage());
	}
}
