#include "ScalarConverter.hpp"
#include <iomanip>


ScalarConverter::ScalarConverter() { std::cout << "Constructor called." << std::endl; }

ScalarConverter::~ScalarConverter() { std::cout << "Destructor called." << std::endl; }

ScalarConverter::ScalarConverter(const ScalarConverter &rhs) { *this  = rhs; std::cout << "Copy constructor called." << std::endl; };

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &rhs) { (void)rhs; std::cout << "Copy constructor called." << std::endl; return *this; }

void ScalarConverter::to_char(std::string var)
{
    try
    {
        int i = 0;
        if ( std::stoi(var) == std::stof(var))
            i = std::stoi(var);
        if (i <= 32  || i >= 127)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: " << (char )i << std::endl; 
    } catch (const std::exception& e)
    {
        std::cout << "An error occured while casting to char." << std::endl;
    }
}

void ScalarConverter::to_int(std::string var)
{    
    try
    {
        int i = std::stoi(var);
        std::cout << "int: " << i << std::endl;
    } catch (const std::exception& e)
    {
        std::cout << "An error occured while casting to int." << std::endl;
    }
}

void ScalarConverter::to_float(std::string var) // max 6 basamak. (before , + after ,)
{    
    try
    {
        float f = std::stof(var);
        std::cout << "float: " << f;
        if (f == std::stoi(var))
            std::cout << ".0f" ;
        std::cout << std::endl;
    } catch (const std::exception& e)
    {
        std::cout << "An error occured while casting to float." << std::endl;
    }
}

void ScalarConverter::to_double(std::string var)
{
    try
    {
        double d = std::stod(var);
        std::cout << std::setprecision(16) << "double: " << d; // max 16 basamak. (before , + after ,)
        if (d == std::stoi(var))
            std::cout << ".0" ;
        std::cout << std::endl;
    } catch (const std::exception& e)
    {
        std::cout << "An error occured while casting to double." << std::endl;
    }
}

void ScalarConverter::convert(std::string var)
{
    if (nan_check(var))
        return;
    to_char(var);
    to_int(var);
    to_float(var);
    to_double(var);
}

int ScalarConverter::nan_check(std::string var)
{
	std::string nan_s[] = {"-inf", "+inf", "nan", "-inff", "+inff", "nanf"};
	std::string kind;
	int	i = 0;
	while (i < 6)
	{
		if (nan_s[i] == var)
		{
			kind = nan_s[i % 3];
			break ;
		}
		i++;
	}
	if (i == 6)
		return (0);
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << kind << "f" <<std::endl;
	std::cout << "double: " << kind <<std::endl;
	return (1);
}

