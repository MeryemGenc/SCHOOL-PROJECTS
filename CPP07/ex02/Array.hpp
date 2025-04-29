#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{

    private:
        T*  _arr;
        size_t _size;
    public:
        Array(): _arr(new T()), _size(0) {};
        Array(size_t n): _arr(new T[n]), _size(n) {};
        ~Array() { delete [] _arr; };
        Array(const Array& rhs): _arr( new T[rhs.size()] ), _size( rhs.size() ) {
            for ( size_t i = 0; i < _size; i++ )
                _arr[i] = rhs._arr[i];
        }
        Array& operator=(const Array& rhs) {
        if ( this != &rhs ) {
            delete [] _arr;
            _arr = new T[rhs.size()];
            _size = rhs._size;
            for ( size_t i = 0; i < _size; i++ )
                _arr[i] = rhs._arr[i];
        }
        return *this;
    }
        T& operator[]( size_t i ) const {
            if ( i >= _size )
                throw OutOfBoundsException();
            return _arr[i];
        }

        size_t size() const { return _size; };
        
        class OutOfBoundsException : public std::exception {
            public:
                virtual const char* what() const throw() { return "Index is out of bounds";}
        };
};

template < typename T >
std::ostream& operator<<( std::ostream& out, const Array<T>& arr ) {
    for ( size_t i = 0; i < arr.size(); i++ )
        out << arr[i] << " ";
    out << "\n";
    return out;
}


#endif
