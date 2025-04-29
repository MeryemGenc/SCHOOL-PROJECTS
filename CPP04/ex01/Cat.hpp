#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    private:
        Brain *_br;
    public:
        Cat();
        ~Cat();
        Cat( const Cat& src );
        Cat& operator=( const Cat& rhs );
        void Cat::setType(std::string type);
        void makeSound( void ) const; // type varsa - type yoksa ona göre yazdır
};


#endif