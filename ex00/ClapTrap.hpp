#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
	private:
		std::string	_name;
		int			_hit_points = 10;
		int			_energy_points = 10;
		int			_attack_damage = 0;
	public:
		ClapTrap (void);
		ClapTrap (std::string name);
		ClapTrap (const ClapTrap &original);
		ClapTrap& operator = (const ClapTrap &original);
		~ClapTrap (void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		///////GETTERS & SETTERS///////
		std::string getName(void) const;
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;

};


#endif
