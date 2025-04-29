#include "ClapTrap.hpp"

int main()
{
    // ClapTrap claptrap1;
    // claptrap1.attack("abc");

    ClapTrap claptrap2("clap");
    ClapTrap claptrap3(claptrap2);
    ClapTrap claptrap4("trap");

    claptrap2.takeDamage(100000000);
    claptrap2.beRepaired(10);

    claptrap2.attack("trap");
    claptrap4.takeDamage(5);
    claptrap4.beRepaired(1000);
    claptrap4.takeDamage(1000);
    claptrap4.beRepaired(1000);
    return 0;
}

