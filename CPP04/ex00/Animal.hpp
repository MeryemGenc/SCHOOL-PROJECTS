#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(std::string);
        ~Animal();
        Animal( const Animal& src );
        Animal& operator=( const Animal& rhs );

        std::string getType(void) const;
        void setType(std::string);
        virtual void makeSound( void ) const; // *vptr
};


#endif