#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact book[8];
        bool is_index_full;
        int index;

    public:
        PhoneBook();
        void add(void);
        void search();
};
