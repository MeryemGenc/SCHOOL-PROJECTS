#include "PhoneBook.hpp"
// gerekli mi?: #include "Contact.hpp"

// MAKEFILE OLUŞTURRR !!

int main()
{
    PhoneBook p_b;
    std::string choice;

    std::cout << "-----------------------------------------\n";
    std::cout << "---------- WELCOME TO PHONEBOOK ---------\n";
    std::cout << "-----------------------------------------\n";
    std::cout << "OPTIONS:----'ADD'-----'SEARCH'-----'EXIT'\n";
    while (true)
    {
        std::cout << "\nOPTION: ";
        std::cin >> choice;
        if (choice == "ADD")
            p_b.add();
        else if (choice == "SEARCH")
            p_b.search();
        else if (choice == "EXIT")
            break ;
        else
            std::cout << "Invalid Command! Try Again.\n";
    }
    return 0;
}