#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    protected:
        ScavTrap();
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap&);
        ScavTrap& operator= (const ScavTrap&);
        ~ScavTrap();

        /*void attack(const std::string& target);
        void attack(std::string const& target);    bu 2 sinin farkı nedir*/ 
        void attack(std::string const& target);
        void guardGate();
};


#endif