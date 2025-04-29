#include "Contact.hpp"

void Contact::set_name(std::string name)
{
    this->name = name;
}

void Contact::set_surName(std::string surName)
{
    this->surName = surName;
}

void Contact::set_nickName(std::string nickName)
{
    this->nickName = nickName;
}

void Contact::set_number(std::string number)
{
    this->number = number;
}

void Contact::set_darkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

std::string Contact::get_name(void)
{
    return (this->name);
}

std::string Contact::get_surName(void)
{
    return (this->surName);
}

std::string Contact::get_nickName(void)
{
    return (this->nickName);
}

std::string Contact::get_number(void)
{
    return (this->number);
}

std::string Contact::get_darkestSecret(void)
{
    return (this->darkestSecret);
}
