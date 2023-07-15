#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap bot1("David");
	ClapTrap bot2("John");
	ClapTrap bot3("Jason");
	ClapTrap bot4("Mary");
	ClapTrap bot5("June");

	bot1.attack(bot2.getName());
	bot2.takeDamage(bot1.getAttackDamage());
}
