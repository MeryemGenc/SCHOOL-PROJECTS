#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
        std::string name;
        std::string surName;
        std::string nickName;
        std::string number;
        std::string darkestSecret;
    
    public:
        void set_name(std::string name);
        void set_surName(std::string surName);
        void set_nickName(std::string nickName);
        void set_number(std::string number);
        void set_darkestSecret(std::string darkestSecret);
        std::string get_name(void);
        std::string get_surName(void);
        std::string get_nickName(void);
        std::string get_number(void);
        std::string get_darkestSecret(void);

};

#endif