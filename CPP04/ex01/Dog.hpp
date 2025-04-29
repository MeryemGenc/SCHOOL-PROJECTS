#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    private:
        Brain *_br;
    public:
        Dog();
        ~Dog();
        Dog( const Dog& src );
        Dog& operator=( const Dog& rhs );
        void Dog::setType(std::string type);

        void makeSound( void ) const;
};


#endif