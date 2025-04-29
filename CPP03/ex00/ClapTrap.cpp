#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) 
{
    std::cout << "ClapTrap 2nd constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& tmp)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = tmp;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& tmp)
{
    std::cout << "ClapTrap assigment operator called" << std::endl;
    if (this != &tmp)
    {
        _name = tmp._name;
        _hit_points = tmp._hit_points;
        _attack_damage = tmp._attack_damage;
        _energy_points = tmp._energy_points;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (!this->_energy_points)
    {
        std::cout << this->_name << ", you have no enough energy point to attack." << std::endl;
        return ;
    }
    if (this->_hit_points < this->_attack_damage)
        std::cout << this->_name << ", you have no enough hit point to attack." << std::endl;
    else
    {
        std::cout << _name << " attacks " << target << "; causing " << _attack_damage << " points of damage." << std::endl;
        this->_energy_points--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_points < amount) // bunu niye burada yazdırdım
        std::cout << _name << ", you have no enough hitpoint to attack." << std::endl;
    else
    {
        std::cout << _name << " takes " << amount << " points of damage." << std::endl;
        _hit_points -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!_energy_points)
        std::cout << _name << ", you have no enough energy point to repair." << std::endl;
    else
    {
        std::cout << _name << " is repairing." << std::endl;
        _energy_points--;
        _hit_points = amount;
    }
}

