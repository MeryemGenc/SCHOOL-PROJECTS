#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include "Data.h"

class Serializer
{
	private:
		
	public:
		Serializer();
		Serializer(const Serializer & copy);
		~Serializer();
		Serializer &operator=(const Serializer & copy);

		static uintptr_t serialize(Data *ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
