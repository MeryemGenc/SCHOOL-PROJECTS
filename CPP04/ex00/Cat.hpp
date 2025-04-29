#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
    protected:
    public:
        Cat();
        ~Cat();
        Cat( const Cat& src );
        Cat& operator=( const Cat& rhs );
        void Cat::setType(std::string type);
        void makeSound( void ) const;
};


#endif