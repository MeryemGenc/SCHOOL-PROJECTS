#include "PhoneBook.hpp"

int is_number(std::string num)
{
    int i = 0;

    while (num[i])
    {
        if (num[i] <= '0' || num[i] >= '9')
            return 1;
        i++;
    }
    return 0;
}

void print_header(void)
{
    std::cout << "                 PHONEBOOK               " << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|     INDEX|      NAME|   SURNAME|  NICKNAME|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
}

void print_column(Contact book)
{
    std::cout << book.get_name() << std::endl;
    std::cout << book.get_surname() << std::endl;
    std::cout << book.get_nickname() << std::endl;
    std::cout << book.get_number() << std::endl;
    std::cout << book.get_secret() << std::endl;
}

void PhoneBook::print_book(void) // hücre 10charlık olmalı -> | ile ayrılmalı.
{
    print_header();

    int len = this->index;
    if (is_index_full)
        len = 8;
    for (size_t i = 0; i < len; i++)
    {
        std::cout << i << std::endl;
        std::cout << book->get_name() << std::endl;
        std::cout << book->get_surname() << std::endl;
        std::cout << book->get_nickname() << std::endl;
    }
}

void PhoneBook::add(void)
{
    std::string inpt;
    if (index >= 8)
        is_index_full == true;
    index = index % 8;
    
    std::cout << "Enter a name: ";
    std::getline(std::cin, inpt);
    book[index].set_name(inpt);
    
    std::cout << "Enter a surname: ";
    std::getline(std::cin, inpt);
    book[index].set_surname(inpt);
    
    std::cout << "Enter a nickname: ";
    std::getline(std::cin, inpt);
    book[index].set_nickname(inpt);
    
    std::cout << "Enter a number: ";
    std::getline(std::cin, inpt);
    book[index].set_number(inpt);
    
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, inpt);
    book[index].set_secret(inpt);

    index++;
}

void PhoneBook::search(void)
{
    int len = index;
    std::string inpt;
    int num;

    if (is_index_full)
        len = 8;
    if (len == 0)
    {
        std::cout << "There is no contact in book";
        return ;
    }
    // print book()
    std::cout << "Enter index of column: ";
    std::cin >> inpt;
    num = std::atoi(inpt.c_str());
    if (is_number(inpt) || num < 0 || num > index)
    {
        std::cout << "Wrong index.";
        return ;
    }
    print_column(book[num]);
}

// void exit(void);
PhoneBook::PhoneBook(void)
{
    int index = 0;
    bool is_index_full = false;
}


