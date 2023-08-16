#include "FragTrap.hpp"

///////////CONSTRUCTORS////////////

FragTrap::FragTrap(void) {
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap constructor called for "
		<< _name << std::endl;
}

FragTrap::FragTrap(const std::string name) {
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap constructor called for "
		<< _name << std::endl;
}

FragTrap::FragTrap (const FragTrap& original) : ClapTrap(original) {
	std::cout << "FragTrap copy constructor called for: " <<
		_name << std::endl;
	_hit_points = original.getHitPoints();
	_energy_points = original.getEnergyPoints();
	_attack_damage = original.getAttackDamage();
}

FragTrap& FragTrap::operator = (const FragTrap &original) {
	std::cout << "Fragtrap assignment operator constructor called for: "
		<< _name << std::endl;
	_hit_points = original.getHitPoints();
	_energy_points = original.getEnergyPoints();
	_attack_damage = original.getAttackDamage();
	return *this;
}

FragTrap::~FragTrap (void) {
	std::cout << "FragTrap destructor called for "
		<< _name << std::endl;
}

///////SUBJECT MEMBER FUNCTIONS////////
void FragTrap::highFivesGuys(void) {
	std::cout << std::endl << "Heeyy!!! Give me an High Five!!! "
		<< std::endl << std::endl;
}
