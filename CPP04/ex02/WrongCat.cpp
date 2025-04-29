#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat 1st constructor called." << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor called." << std::endl;
}

WrongCat::WrongCat( const WrongCat& src ): WrongAnimal(src) // Animal(src): kontrol ET & YANLISSA SIL
{
    std::cout << "WrongCat Copy constructor called." << std::endl;
    *this = src;
}

void WrongCat::setType(std::string type) // gerek yoksa sil bunu.
{
    WrongAnimal::setType(type);
}

WrongCat& WrongCat::operator=( const WrongCat& rhs )
{
    std::cout << "WrongCat assigment operator called." << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

void WrongCat::makeSound( void ) const // type varsa - type yoksa ona göre yazdır
{
    std::cout << "Meow Meow!" << std::endl;
}

