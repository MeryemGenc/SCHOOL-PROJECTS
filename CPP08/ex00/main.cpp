#include "easyfind.hpp"

int main()
{
    std::vector<int> v1;
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> v2( arr, arr + sizeof( arr ) / sizeof( int ) );
    std::list<int> list1( arr, arr + sizeof( arr ) / sizeof( int ) );

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    try
    {
        std::cout << easyfind(v1, 3) << std::endl;
        // std::cout << easyfind(v1, 6) << std::endl;
        std::cout << easyfind(v2, 7) << std::endl;
        std::cout << easyfind(list1, 9) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}

