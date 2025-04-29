#include "iter.hpp"


int main()
{
    {
        int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
        std::cout << "int array: ";
        iter(arr, 8, &print_one);
        std::cout << std::endl;
    }
    {
        float arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
        std::cout << "float array: ";
        iter(arr, 8, &print_one);
        std::cout << std::endl;
    }
    {
        char arr[] = {'1', '2', '3', '4'};
        std::cout << "char array: ";
        iter(arr, 4, &print_one);
        std::cout << std::endl;
    }
    {
        std::string arr[] = {"1111", "2222", "3333", "4444"};
        std::cout << "char array: ";
        iter(arr, 4, &print_one);
        std::cout << std::endl;
    }
}

