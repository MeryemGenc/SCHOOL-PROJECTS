#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        ClapTrap();
        std::string _name;
        unsigned int _hit_points;
        unsigned int _energy_points;
        unsigned int _attack_damage;
    public:
        ClapTrap(std::string name);
        ClapTrap(std::string name, unsigned int, unsigned int, unsigned int);
        ClapTrap(const ClapTrap& tmp);
        ClapTrap& operator=(const ClapTrap&);
        ~ClapTrap();
        
        void attack(std::string const& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif