#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    std::cout << "Dog 1st constructor called." << std::endl;
    this->_br = new Brain();
    if (!_br)
        std::cout << "Dog 1st constructor: A problem occured." << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog Destructor called." << std::endl;
    delete (this->_br);
}

Dog::Dog( const Dog& src ): Animal(src) // Animal(src): kontrol ET & YANLISSA SIL
{
    std::cout << "Dog Copy constructor called." << std::endl;
    *this = src;
}

void Dog::setType(std::string type) // gerek yoksa sil bunu.
{
    Animal::setType(type);
}

Dog& Dog::operator=( const Dog& rhs )
{
    std::cout << "Dog assigment operator called." << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

void Dog::makeSound( void ) const // type varsa - type yoksa ona göre yazdır
{
    std::cout << "Woof Woof!" << std::endl;
}

