#include "HumanB.hpp"


HumanB::HumanB(std::string name) : _name(name) // bu nedirrr gardaşşşş
{
    this->_weap = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& weap)
{
    this->_weap = &weap; // bu zaten ana nesnenin adresini verecek bana
}

void HumanB::attack(void) const
{
    if (this->_weap && this->_weap->getType() != "")
        std::cout << this->_name << " attacks with their " << this->_weap->getType() << std::endl;
    else
        std::cout << this->_name << " has no weapon to attack." << std::endl;
}
