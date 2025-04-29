#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weap) : _name(name), _weap(weap) //bu değişkenlerin değerlerini verilern değerlerden başlatılmasını sağlar.  bu satır olmayınca hata veriyor _weap için
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void) const // name "" mu diye kontrol edilecek
{
    if (this->_weap.getType() != "")
        std::cout << this->_name << " attacks with their " << this->_weap.getType() << std::endl;
    else
        std::cout << this->_name << " has no weapon to attack." << std::endl;
}

