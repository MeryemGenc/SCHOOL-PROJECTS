#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter // static!!!!
{
    private:

    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &rhs);
        ScalarConverter& operator=(const ScalarConverter &rhs);

        static void to_char(std::string var);
        static void to_int(std::string var);
        static void to_float(std::string var);
        static void to_double(std::string var);
        
        static void convert(std::string var);
        static int nan_check(std::string var);


};

#endif
