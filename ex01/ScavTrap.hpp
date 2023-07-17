#include "ClapTrap.hpp"

class ScavTrap {
	private:
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
	public:
		ScavTrap (void);
		ScavTrap (std::string name);
		ScavTrap (const ScavTrap &original);
		ScavTrap& operator = (const ScavTrap &original);
		~ScavTrap (void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		///////GETTERS & SETTERS///////
		std::string getName(void) const;
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;
};
