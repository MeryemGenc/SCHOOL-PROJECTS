#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("Default WrongAnimal")
{
    std::cout << "WrongAnimal 1st constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type) {  
    std::cout << "WrongAnimal 2nd constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor called." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src )
{
    std::cout << "WrongAnimal Copy constructor called." << std::endl;
    *this = src;
}

void WrongAnimal::setType(std::string type)
{
    this->_type = type;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
    std::cout << "WrongAnimal assigment operator called." << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

void WrongAnimal::makeSound( void ) const // type varsa - type yoksa ona göre yazdır
{
    std::cout << "WrongAnimal makesound called." << std::endl;
}

