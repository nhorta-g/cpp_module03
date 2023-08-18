#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	public:
		DiamondTrap (void);
		~DiamondTrap (void);
		DiamondTrap (const DiamondTrap &original);
		DiamondTrap &operator = (const DiamondTrap &original);

		DiamondTrap (const std::string name);

		void whoAmI(void);
		void myStatus(void);

	protected:
		std::string _name;
};
#endif
