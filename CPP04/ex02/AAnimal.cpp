#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("Default AAnimal")
{
    std::cout << "AAnimal 1st constructor called." << std::endl;
}

AAnimal::AAnimal(std::string type): _type(type) {  
    std::cout << "AAnimal 2nd constructor called." << std::endl;
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal Destructor called." << std::endl;
}

AAnimal::AAnimal( const AAnimal& src )
{
    std::cout << "AAnimal Copy constructor called." << std::endl;
    *this = src;
}

void AAnimal::setType(std::string type)
{
    this->_type = type;
}

AAnimal& AAnimal::operator=( const AAnimal& rhs )
{
    std::cout << "AAnimal assigment operator called." << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

// void AAnimal::makeSound( void ) const // type varsa - type yoksa ona göre yazdır
// {
//     std::cout << "AAnimal makesound called." << std::endl;
// }

