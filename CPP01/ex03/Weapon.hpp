#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
    private: 
        std::string _type;
    public:
        Weapon(std::string type);
        ~Weapon();
        void setType(std::string type);
        const std::string& getType(); //neden string referansı döndürüyoruzz-pdf: "Tür olarak bir const referans döndüren bir getType() üye işlevi"
};

#endif
