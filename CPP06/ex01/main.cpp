#include "Serializer.hpp"

int main()
{
	Data ptr {
        ptr.num = 54,
        ptr.c = 'A'
    };

	uintptr_t intprt = Serializer::serialize(&ptr);

	std::cout << "Num: " << intprt << std::endl;

    std::cout << "Num: " << (Serializer::deserialize(intprt))->num << std::endl;
    std::cout << "Char: " << (Serializer::deserialize(intprt))->c << std::endl;
}