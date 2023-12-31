#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap (const std::string name);
		~ScavTrap (void);
		ScavTrap (const ScavTrap& original);
		ScavTrap &operator = (const ScavTrap& original);
		void guardGate(void);
	private:

};
#endif
