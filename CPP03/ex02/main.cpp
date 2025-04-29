#include "FragTrap.hpp"

int main( void )
{
    FragTrap aaa( "aaa" );

    aaa.attack( "fire" );
    aaa.takeDamage( 10 );
    aaa.beRepaired( 10 );
    aaa.highFivesGuys();

    return EXIT_SUCCESS;
}