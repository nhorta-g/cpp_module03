#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
	FragTrap (void);
		FragTrap (const std::string name);
		~FragTrap (void);
		FragTrap (const FragTrap& original);
		FragTrap &operator = (const FragTrap& original);
		void highFivesGuys(void);
	private:

};
#endif
