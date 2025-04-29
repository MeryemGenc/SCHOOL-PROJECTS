#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    std::cout << "Cat 1st constructor called." << std::endl;
    this->_br = new Brain();
    if (!_br)
        std::cout << "Cat 1st constructor: A problem occured." << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat Destructor called." << std::endl;
    delete (this->_br);
}

Cat::Cat( const Cat& src ): Animal(src) // Animal(src): kontrol ET & YANLISSA SIL
{
    std::cout << "Cat Copy constructor called." << std::endl;
    *this = src;
}

void Cat::setType(std::string type) // gerek yoksa sil bunu.
{
    Animal::setType(type);
}

Cat& Cat::operator=( const Cat& rhs )
{
    std::cout << "Cat assigment operator called." << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

void Cat::makeSound( void ) const // type varsa - type yoksa ona göre yazdır
{
    std::cout << "Meow Meow!" << std::endl;
}

