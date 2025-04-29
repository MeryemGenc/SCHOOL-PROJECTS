#include "Zombie.hpp"
#define N 7

int main()
{
    Zombie *horde = zombieHorde(N, "haci");

    int i = 0;
    while (i < N)
    {
        horde[i].announce();
        i++;
    }

    delete [] horde;
}