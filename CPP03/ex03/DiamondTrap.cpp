#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : _name(name), ClapTrap(name + std::string("_clap_name"), FragTrap::_hit_points, ScavTrap::_energy_points, FragTrap::_attack_damage) // olmuyosa direkt sabit değerlerii ata: ClapTrap(name, 100, 50, 20) gibi
{
    std::cout << "DiamondTrap 2nd constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& tmp) : ClapTrap(tmp)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = tmp;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& tmp)
{
    std::cout << "DiamondTrap assigment operator called" << std::endl;
    if (this != &tmp)
    {
        _name = tmp._name;
        _hit_points = tmp._hit_points;
        _attack_damage = tmp._attack_damage;
        _energy_points = tmp._energy_points;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI() // dene bak çalışıyo mu
{
    std::cout << "DiamondTrap name: " << this->_name << " ClapTrap name: " << ClapTrap::_name << std::endl;
}
