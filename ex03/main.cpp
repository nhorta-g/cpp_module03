#include "DiamondTrap.hpp"

int	main(void) {
	std::cout << std::endl << "----------------DiamondTrap A----------------" << std::endl;
	DiamondTrap A = DiamondTrap("BotDiamond_A");
	A.whoAmI();
	A.myStatus();

	std::cout << std::endl << "----------------DiamondTrap B----------------" << std::endl;
	DiamondTrap B = DiamondTrap("BotDiamond_B");
	B.whoAmI();
	B.myStatus();

	std::cout << std::endl << "------------------ClapTrap C----------------" << std::endl;
	ClapTrap C = ClapTrap("BotClap_C");

	std::cout << std::endl << "------------------ScavTrap D----------------" << std::endl;
	ScavTrap D = ScavTrap("BotScav_D");

	std::cout << std::endl << "------------Both Diamonds attack------------"
		<< std::endl << std::endl;

	A.attack(B.getName());
	B.takeDamage(A.getAttackDamage());
	A.getEnergyPoints();
}
