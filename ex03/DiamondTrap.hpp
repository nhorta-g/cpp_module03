#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
	public:
		DiamondTrap (void);
		~DiamondTrap (void);
		DiamondTrap (const DiamondTrap &original);
		DiamondTrap &operator = (const DiamondTrap &original);

		DiamondTrap (const std::string name);

		void whoAmI(void);
		void myStatus(void);

	private:
		std::string _name;
		using FragTrap::_hit_points;
		using FragTrap::_attack_damage;
		using ScavTrap::_energy_points;
};
#endif
