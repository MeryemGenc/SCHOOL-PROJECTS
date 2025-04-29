#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain 1st constructor called." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called." << std::endl;
}

Brain::Brain( const Brain& src )
{
    std::cout << "Brain Copy constructor called." << std::endl;
    *this = src;
}

Brain& Brain::operator=( const Brain& rhs )
{
    std::cout << "<Brain.cpp:32> Brain copy called." << std::endl;
    if ( this != &src ) {
        for ( int i = 0; i < 100; i++ ) {
            this->_ideas[i] = src._ideas[i];
        }
    }
    return *this;
}

