#include "Zombie.hpp"

int main( void ) 
{
    Zombie *zombie2 = newZombie("heap");
    zombie2->announce();
    delete zombie2;

    // stack
    randomChump("stack");
    return 0;
}

