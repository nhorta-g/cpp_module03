#include "DiamondTrap.hpp"

int	main(void) {
	std::cout << std::endl << "----------------DiamondTrap A----------------" << std::endl;
	DiamondTrap A = DiamondTrap("BotDiamond_A");

	std::cout << std::endl << "----------------DiamondTrap B----------------" << std::endl;
	DiamondTrap B = DiamondTrap("BotDiamond_B");

	std::cout << std::endl << "------------------ClapTrap C----------------" << std::endl;
	ClapTrap C = ClapTrap("BotClap_C");

	std::cout << std::endl << "------------------ScavTrap D----------------" << std::endl;
	ScavTrap D = ScavTrap("BotScav_D");

	std::cout << std::endl << "--------------------------------------------" << std::endl;

	std::cout << "my name is " << A.getName() << std::endl << "my name is "
		<< C.getName() << std::endl;
	std::cout << std::endl << "------------------Who am I?-----------------" << std::endl;
	A.whoAmI();
	std::cout << std::endl << "--------------------------------------------" << std::endl;

	A.attack(B.getName());
	B.takeDamage(A.getAttackDamage());
	A.getEnergyPoints();
}
