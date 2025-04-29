#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("scav1");
    ScavTrap scav2("scav2");
    ScavTrap scaav = scav;
    scav.attack("scav2");
    scav2.takeDamage(500);
    scav2.beRepaired(10);
    scav2.guardGate();
    return 0;
}