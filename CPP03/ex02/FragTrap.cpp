#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap 2nd constructor called" << std::endl;
}

// Yukarıda sıkıntı çıkarsa  bunu çalıştır. 
// FragTrap::FragTrap(std::string name) : ClapTrap(name)
// {
//     std::cout << "FragTrap 2nd constructor called" << std::endl;
//     this->_hit_points = 100;
//     this->_energy_points = 100;
//     this->_attack_damage = 30;
// }

FragTrap::FragTrap(const FragTrap& tmp) // bunu yapmamıza gerek var mı? : ClapTrap(tmp)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = tmp;
}

FragTrap& FragTrap::operator= (const FragTrap& tmp)
{
    std::cout << "FragTrap assigment operator called" << std::endl;
    if (this != &tmp)
    {
        _name = tmp._name;
        _hit_points = tmp._hit_points;
        _attack_damage = tmp._attack_damage;
        _energy_points = tmp._energy_points;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
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
        std::cout << "FragTrap " << _name << " attacks " << target << "; causing " << _attack_damage << " points of damage." << std::endl;
        this->_energy_points--;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " high fives everyone." << std::endl;
}



