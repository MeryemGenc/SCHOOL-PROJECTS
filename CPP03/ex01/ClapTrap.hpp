#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        unsigned int _hit_points;
        unsigned int _energy_points;
        unsigned int _attack_damage;
        ClapTrap();
    public:
        ClapTrap(std::string name);
        ClapTrap(std::string name, unsigned int, unsigned int, unsigned int);
        ClapTrap(const ClapTrap& tmp);
        ClapTrap& operator=(const ClapTrap&);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif