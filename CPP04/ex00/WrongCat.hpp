#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    protected:
    public:
        WrongCat();
        ~WrongCat();
        WrongCat( const WrongCat& src );
        WrongCat& operator=( const WrongCat& rhs );
        void WrongCat::setType(std::string type);
        void makeSound( void ) const;
};


#endif