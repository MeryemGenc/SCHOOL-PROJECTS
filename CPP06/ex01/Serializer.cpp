#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer constructor called." << std::endl;
}

Serializer::Serializer(const Serializer & copy)
{
	*this = copy;
	std::cout << "Serializer copy constructer called." << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Serializer destructor called." << std::endl;
}

Serializer &Serializer::operator=(const Serializer & copy)
{
	(void)copy;
	std::cout << "Serializer copy assignment called." << std::endl;
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast< uintptr_t >(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return ( reinterpret_cast< Data* > (raw) );
}

