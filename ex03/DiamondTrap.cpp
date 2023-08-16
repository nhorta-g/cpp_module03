#include "DiamondTrap.hpp"

///////////CONSTRUCTORS////////////
DiamondTrap::DiamondTrap (void) {
	std::cout << "DiamondTrap standard constructor called. "
		<< std::endl;
}
/*
DiamondTrap::DiamondTrap (const DiamondTrap &original) {
	*this = original;
	std::cout << "DiamondTrap copy constructor called for: "
		<< original._name << std::endl;
}
*/
DiamondTrap& DiamondTrap::operator = (const DiamondTrap &original) {
	std::cout << "Diamondtrap assignment operator constructor called for: "
		<< original._name << std::endl;
	_name = original._name;
	_hit_points = original._hit_points;
	_energy_points = original._energy_points;
	_attack_damage = original._attack_damage;
	return *this;
}

DiamondTrap::~DiamondTrap (void) {
	std::cout << "DiamondTrap destructor called for "
		<< _name << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) {
	this->setName(name + "_clap_name");

	ScavTrap temp_scav(name);
	FragTrap temp_frag(name);

	_hit_points = temp_frag.getHitPoints();
	_energy_points = temp_scav.getEnergyPoints();
	_attack_damage = temp_frag.getAttackDamage();
	std::cout << "DiamondTrap constructor called for "
		<< _name << std::endl;
}

///////SUBJECT MEMBER FUNCTIONS////////
void DiamondTrap::whoAmI(void) {
	std::cout << "Diamond name is: " << _name << std::endl;
	std::cout << "ClapTrap name is: " << this->getName()
		<< std::endl;
}

