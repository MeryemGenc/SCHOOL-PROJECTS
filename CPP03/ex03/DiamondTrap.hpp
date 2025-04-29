#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;
        DiamondTrap();
    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap&);
        DiamondTrap& operator= (const DiamondTrap&);
        ~DiamondTrap();
        void whoAmI();

        using ScavTrap::attack;
};


#endif