#include "Array.hpp"


int main( void )
{
    Array< float > arr0(3); // < float >: template parameter
    Array< int > arr1(10);
    Array< int > arr2(5);

    arr0[0] = 51.2;
    arr0[1] = 87.45;
    arr0[2] = 354.56;

    for ( size_t i = 0; i < arr1.size(); i++ )
        arr1[i] = i * 2;

    std::cout << "\nFloat Array: " << arr0 << std::endl;
    std::cout << "Int Array 1: " << arr1 << std::endl;

    arr2 = arr1;

    std::cout << "int Array 2: " << arr2 << std::endl;

    try {
        std::cout << "Accessing a valid index: " << arr1[5] << std::endl;
        std::cout << "Accessing an invalid index: " << arr1[10] << std::endl;
    } catch ( Array< int >::OutOfBoundsException& e ) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return ( 0 );
}