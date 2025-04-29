#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        FragTrap();
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap&);
        FragTrap& operator= (const FragTrap&);
        ~FragTrap();

        void highFivesGuys(void);
        void attack(const std::string& target);
};


#endif