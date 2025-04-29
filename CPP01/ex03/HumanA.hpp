#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private: 
        std::string _name;
        Weapon& _weap;
        HumanA();
    public:
        HumanA(std::string name, Weapon& weap); // weapon getter ı referance döndüğü için ref alıyoruz
        ~HumanA();
        void attack(void) const; // bu const ne şimdi?-> const lar ile kullanabilmek için - _weap.getType() const döndürüyor.
};
// neden burada ref . humanB de pointer???
#endif