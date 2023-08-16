#include "ScavTrap.hpp"

///////////CONSTRUCTORS////////////

ScavTrap::ScavTrap(void) {
	_hit_points = 100;
	_energy_points = 10;
	_attack_damage = 20;
	std::cout << "ScavTrap default constructor called for "
		<< _name << std::endl;
}

ScavTrap::ScavTrap(const std::string name) {
	_name = name;
	_hit_points = 100;
	_energy_points = 10;
	_attack_damage = 20;
	std::cout << "ScavTrap constructor called for "
		<< _name << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap& original) : ClapTrap(original) {
	std::cout << "ScavTrap copy constructor called for: " <<
		_name << std::endl;
	_hit_points = original.getHitPoints();
	_energy_points = original.getEnergyPoints();
	_attack_damage = original.getAttackDamage();
}

ScavTrap& ScavTrap::operator = (const ScavTrap &original) {
	std::cout << "Scavtrap assignment operator constructor called for: "
		<< _name << std::endl;
	_hit_points = original.getHitPoints();
	_energy_points = original.getEnergyPoints();
	_attack_damage = original.getAttackDamage();
	return *this;
}

ScavTrap::~ScavTrap (void) {
	std::cout << "ScavTrap destructor called for "
		<< _name << std::endl;
}

///////SUBJECT MEMBER FUNCTIONS////////
void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap is now at Gate Keeper mode " << std::endl;
}
