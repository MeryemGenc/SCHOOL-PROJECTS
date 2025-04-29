#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon* _weap; // neden burada pointer - humana da referance -> çünkü referanslar NULL olarak başlatılamaz????
    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon& weap);
        void attack(void) const; // bunun sopası yoksa nasıl attack yapacak?
};

#endif