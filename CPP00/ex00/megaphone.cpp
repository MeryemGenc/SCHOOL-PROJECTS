#include <iostream>
#include <string>

int main(int argc, char **argv) 
{
    int i = 1;
    int j;

    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < argc)
        {
            std::string str(argv[i]);
            j = 0;
            while (str[j])
            {
                std::cout << (char)std::toupper(str[j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}