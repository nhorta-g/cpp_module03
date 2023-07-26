#include "ClapTrap.hpp"

///////////CONSTRUCTORS////////////
ClapTrap::ClapTrap (void) {
	std::cout << "ClapTrap default constructor called" << std::endl;
	_hit_points = 50;
	_energy_points = 20;
	_attack_damage = 10;
}

ClapTrap::ClapTrap (std::string name) {
	std::cout << "ClapTrap constructor called for: " << name << std::endl;
	_name = name;
	_hit_points = 50;
	_energy_points = 20;
	_attack_damage = 10;
}

ClapTrap::ClapTrap (const ClapTrap &original) {
	std::cout << "Copy constructor called" << std::endl;
	_hit_points = original.getHitPoints();
	_energy_points = original.getEnergyPoints();
	_attack_damage = original.getAttackDamage();
}

ClapTrap& ClapTrap::operator = (const ClapTrap &original) {
	std::cout << "Assignment operator constructor called" << std::endl;
	_hit_points = original.getHitPoints();
	_energy_points = original.getEnergyPoints();
	_attack_damage = original.getAttackDamage();
	return *this;
}

ClapTrap::~ClapTrap (void) {
	std::cout << "ClapTrap destructor called for: "<< _name << std::endl;
}

///////SUBJECT MEMBER FUNCTIONS////////
void ClapTrap::attack(const std::string& target) {
	if (_energy_points > 0) {
		_energy_points--;
		std::cout << "Trap " << _name << " attacks " << target
			<< ", causing " << _attack_damage << " points of damage!"
			<< std::endl;
	}
	else if (_energy_points < 1)
		std::cout<< "Trap " << _name << " has no energy left to attack "
			<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
		std::cout << "Ouch! Trap " << _name << " sufered "
			<< amount << " points of damage!" << std::endl;
		_hit_points = _hit_points - amount;

}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hit_points < 1)
	{
		std::cout << "Trap " << _name << " is dead, game over for him!"
			<< std::endl;
	return;
	}
	else if (_energy_points > 0) {
		_energy_points--;
		_hit_points = _hit_points + amount;
		std::cout << "Trap " << _name << " repaired " << amount <<
			" points! He know has: " << _hit_points << " hit points"
				<< std::endl;
	}
	else if (_energy_points < 1)
		std::cout << "Trap " << _name << " has no energy left to attack "
			<< std::endl;
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
	return (_attack_damage);
}

void ClapTrap::setName(const std::string &name) {
	_name = name;
}

void ClapTrap::setHitPoints(int hitPoints) {
	_hit_points = hitPoints;
}

void ClapTrap::setEnergyPoints(int energy_points) {
	_energy_points = energy_points;
}

void ClapTrap::setAttackDamage(int attack_damage) {
	_attack_damage = attack_damage;
}
