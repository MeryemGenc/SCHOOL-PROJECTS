#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap 2nd constructor called" << std::endl;
}

// ScavTrap::ScavTrap(std::string name) : ClapTrap(name) // 1 sıkıntı cıkarsa böyle kullan + claptrap 3. constructor ı sil
// {
//     std::cout << "ScavTrap 2nd constructor called" << std::endl;
//     this->_hit_points = 100;
//     this->_energy_points = 50;
//     this->_attack_damage = 20;
// }

ScavTrap::ScavTrap(const ScavTrap& tmp) // bunu yapmamıza gerek var mı? : ClapTrap(tmp)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = tmp;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& tmp)
{
    std::cout << "ScavTrap assigment operator called" << std::endl;
    if (this != &tmp)
    {
        _name = tmp._name;
        _hit_points = tmp._hit_points;
        _attack_damage = tmp._attack_damage;
        _energy_points = tmp._energy_points;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (!this->_energy_points)
    {
        std::cout << this->_name << ", you have no enough energy point to attack." << std::endl;
        return ;
    }
    if (this->_hit_points < this->_attack_damage)
        std::cout << this->_name << ", you have no enough attack point to attack." << std::endl;
    else
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << "; causing " << _attack_damage << " points of damage." << std::endl;
        this->_energy_points--;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

