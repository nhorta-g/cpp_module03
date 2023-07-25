#include "ClapTrap.hpp"

///////////CONSTRUCTORS////////////
ClapTrap::ClapTrap (void) {
	std::cout << "ClapTrap cdefault constructor called" << std::endl;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap (std::string name) {
	std::cout << "ClapTrap constructor called for: " << name << std::endl;
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
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
	if (_energy_points > 0 && _hit_points > 0) {
		_energy_points--;
		std::cout << "ClapTrap " << _name << " attacks " << target
			<< ", causing " << _attack_damage << " points of damage!"
			<< std::endl;
	}
	else if (_energy_points == 0)
		std::cout<< "ClapTrap " << _name << " has no energy left to attack " << std::endl;
	else if (_hit_points == 0)
		std::cout<< "ClapTrap " << _name << " Is dead, it has  " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
		std::cout << "ClapTrap " << _name << " received "
			<< amount << " points of damage!" << std::endl;
		_hit_points = _hit_points - amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energy_points > 0) {
		_energy_points--;
		_hit_points = _hit_points + amount;
		std::cout << "ClapTrap " << _name << " received "
			<< amount << " points of damage!" << std::endl;
	}
	else
		std::cout<< "ClapTrap " << _name << " has no energy left to attack " << std::endl;
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
