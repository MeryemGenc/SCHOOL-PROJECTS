#include "PhoneBook.hpp"
#include <iomanip>

void print_contact(std::string str)
{
    if (str.length() <= 10)
        std::cout << std::right << std::setw(10) << str;
    else
        std::cout << str.substr(0, 9) << ".";
}

void print_header(void)
{
    std::cout << "                 PHONEBOOK               ";
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "|   INDEX|    NAME|   SURNAME|  NICKNAME|" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
}

void print_one_column(Contact cntct) // contact sınıfından 1 nesne alıyor
{
    std::cout << "Name: " << cntct.get_name() << "\n";
    std::cout << "Name: " << cntct.get_surName() << "\n";
    std::cout << "Name: " << cntct.get_nickName() << "\n";
    std::cout << "Name: " << cntct.get_number() << "\n";
    std::cout << "Name: " << cntct.get_darkestSecret() << "\n";
    std::cout << std::endl;
}

void print_columns(Contact cntct) // contact sınıfından 1 nesne alıyor
{
    std::cout << "|";
    print_contact(cntct.get_name());
    std::cout << "|";
    print_contact(cntct.get_surName());
    std::cout << "|";
    print_contact(cntct.get_nickName());
    std::cout << std::endl;
}

int is_numeric(std::string str)
{
    int i;
    while (str[i])
    {
        if (std::isdigit(str[i]) == 0)
        {
            std::cout << std::endl << "Invalid Index" << std::endl;
            return 0;
        }
        i++;
    }
    return 1;
}

void PhoneBook::search(void)
{
    int i = 0;
    int s_index;
    int count = index;
    std::string search_index;

    if (is_index_full)
        count = 8;
    if (count == 0)
    {
        std::cout << "There are no contacts in your PhoneBook. You need to add one first." << std::endl;
        return ;
    }
    print_header();
    while (i < count)
    {
        std::cout << "|" << std::right << std::setw(10) << i;
        print_columns(book[i]);
        std::cout << "-----------------------------------------\n";
        i++;
    }
    std::cout << "Index: ";
    std::cin >> search_index;
    if (is_numeric(search_index) == 0)
        return ;
    s_index = std::stoi(search_index); // 1 sıkıntı çıkarırsa bu şekil kullan: stoi(s, NULL, 10)
    if (s_index > count)
    {
        std::cout << "Invalid Index" << std::endl;
        return;
    }
    print_one_column(book[s_index]);
}

void PhoneBook::add(void)
{
    std::string inpt;

    if (index == 8)
        is_index_full = true;
    index %= 8;

    std::cout << "Name: ";
    std::getline(std::cin, inpt);
    book[index].set_name(inpt);

    std::cout << "surName: ";
    std::getline(std::cin, inpt);
    book[index].set_surName(inpt);

    std::cout << "nickName: ";
    std::getline(std::cin, inpt);
    book[index].set_nickName(inpt);

    std::cout << "Number: ";
    std::getline(std::cin, inpt);
    book[index].set_number(inpt);

    std::cout << "DarkestSecret: ";
    std::getline(std::cin, inpt);
    book[index].set_darkestSecret(inpt);

    index++;
}

PhoneBook::PhoneBook(void)
{
    this->index = 0;
    this->is_index_full = false;
}