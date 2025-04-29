#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private: 
        int index;
        bool is_index_full;
        Contact book[8];

    public:
        PhoneBook();
        void print_book(void);
        void add(void);
        void search(void);

};

#endif