#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string);
        ~WrongAnimal();
        WrongAnimal( const WrongAnimal& src );
        WrongAnimal& operator=( const WrongAnimal& rhs );

        std::string getType(void) const;
        void setType(std::string);
        void makeSound( void ) const; // different: "virtual" keyword

};


#endif