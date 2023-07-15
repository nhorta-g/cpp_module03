#include "ClapTrap.hpp"

ClapTrap::ClapTrap (void) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap (std::string name) {
	std::cout << "ClapTrap constructor called" << std::endl;
	_name = name;
}

ClapTrap::ClapTrap (const ClapTrap &original) {
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &original) {
	std::cout << "Assignment operator constructor called" << std::endl;
}

ClapTrap::~ClapTrap (void) {
	std::cout << "ClapTrap destructor called" << std::endl;
}

///////SUBJECT MEMBER FUNCTIONS////////
void ClapTrap::attack(const std::string& target) {
	if (_energy_points > 0) {
		_energy_points--;
		std::cout << "ClapTrap " << _name << " attacks " << target
			<< ", causing " << _attack_damage << " points of damage!"
			<< std::endl;
	}
	else
		std::cout<< "ClapTrap " << _name << " has no energy left to attack " << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "" << std::endl;
}

///////GETTERS & SETTERS///////
std::string ClapTrap::getName(void) const {
	return (_name);
}

int ClapTrap::getHitPoints(void) const {
	return (_hit_points);
}

int ClapTrap::getEnergyPoints(void) const {
	return (_energy_points);
}

int ClapTrap::getAttackDamage(void) const {
	return(_attack_damage);
}
