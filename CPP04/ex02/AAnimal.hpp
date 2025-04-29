#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(std::string); 
        /*
            Virtual destructor:
            A virtual destructor is used to free up the memory space allocated by 
            the derived class object or instance while deleting instances of the derived
            class using a base class pointer object. A base or parent class destructor
            use the virtual keyword that ensures both base class and the derived class 
            destructor will be called at run time, but it called the derived class first
            and then base class to release the space occupied by both destructors.

            Every destructor down gets called no matter what. virtual makes sure it
            starts at the top instead of the middle.

            Virtual destructors are useful when you might potentially delete an instance 
            of a derived class through a pointer to base class:
        */
        virtual ~AAnimal( void );
        AAnimal( const AAnimal& src );
        AAnimal& operator=( const AAnimal& rhs );

        std::string getType(void) const;
        void setType(std::string);
        virtual  void makeSound( void ) const = 0; // that makes our class abstract
};


#endif