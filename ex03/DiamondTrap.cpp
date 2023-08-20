#include "DiamondTrap.hpp"

///////////CONSTRUCTORS////////////
DiamondTrap::DiamondTrap (void) {
	std::cout << "DiamondTrap standard constructor called. " << std::endl;
}

DiamondTrap::DiamondTrap (const DiamondTrap &original) :
	ClapTrap(), FragTrap(), ScavTrap() {
	*this = original;
	std::cout << "DiamondTrap copy constructor called for: " << _name << std::endl;
}

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
	std::cout << "DiamondTrap destructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"),
		FragTrap(), ScavTrap(), _name(name) {
	this->_energy_points = ScavTrap::_energy_points;
	FragTrap::_hit_points = 100;
	FragTrap::_attack_damage = 30;
	std::cout << "DiamondTrap constructor called for " << _name << std::endl;
}

///////SUBJECT MEMBER FUNCTIONS////////
void DiamondTrap::whoAmI(void) {
	std::cout << "Diamond name is: " << _name << std::endl;
	std::cout << "ClapTrap name is: " << ClapTrap::_name << std::endl;
}

void DiamondTrap::myStatus(void) {
	std::cout << std::endl << "Diamond Status, he's name is: " << std::endl
		<< _name << std::endl << "Hit points:    " << _hit_points
		<< std::endl << "Energy points: " << _energy_points << std::endl
		<< "Attack damage: " << _attack_damage << std::endl;
}
