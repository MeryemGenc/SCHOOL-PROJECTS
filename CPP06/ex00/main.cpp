#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong Argument." << std::endl;
        return 1;
    }
    std::string arg = argv[1];
    ScalarConverter::convert(arg);
    return 0;
}


/* ?????????????????????

The following rule applies to the entire module and is not optional.
For each exercise, the type conversion must be solved using one specific type of casting.
Your choice will be checked during defense.


*/



/*

is Nan fonksiyonu yazılacak

You have to handle these pseudo literals as well (you know, for science): -inff, +inff
and nanf.


You have to handle these pseudo literals as well (you know, for fun): -inf, +inf and nan

*/


