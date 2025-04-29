#include "Animal.hpp"

Animal::Animal(): _type("Default Animal")
{
    std::cout << "Animal 1st constructor called." << std::endl;
}

Animal::Animal(std::string type): _type(type) {  
    std::cout << "Animal 2nd constructor called." << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal Destructor called." << std::endl;
}

Animal::Animal( const Animal& src )
{
    std::cout << "Animal Copy constructor called." << std::endl;
    *this = src;
}

void Animal::setType(std::string type)
{
    this->_type = type;
}

Animal& Animal::operator=( const Animal& rhs )
{
    std::cout << "Animal assigment operator called." << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

void Animal::makeSound( void ) const
{
    std::cout << "Animal makesound called." << std::endl;
}

