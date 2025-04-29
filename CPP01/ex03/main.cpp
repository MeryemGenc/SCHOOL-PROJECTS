#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

/*
kod içerisinde weapon ı pointer olarak da kullanabilirdik. Ama bize verilen main içinde weapon ı pointer olarak oluşturmamış. Bu nedenle call by reference olarak nesneyi almamız için reference type kullanmalıydık.

*/


int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
return 0;
}