#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ...";
}

Zombie::Zombie(void)
{
}

void Zombie::set_name(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " has been destroyed." << std::endl;
}
