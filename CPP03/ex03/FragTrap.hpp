#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    protected:
        FragTrap();
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap&);
        FragTrap& operator= (const FragTrap&);
        ~FragTrap();

        void highFivesGuys(void);
        void attack(std::string const& target);
};


#endif