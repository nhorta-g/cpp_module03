#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class ScavTrap: ClapTrap {
	public:
		ScavTrap (const std::string name);
		~ScavTrap (void);
		ScavTrap (const ScavTrap& original);
		ScavTrap &operator = (const ScavTrap& original);
		void guardGate(void);
	private:

};

#endif
