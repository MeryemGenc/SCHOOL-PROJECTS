#include "Span.hpp"


Span::Span(unsigned int N): _N(N) {}

Span::~Span() {}

Span::Span(const Span& rhs) { *this = rhs; }

Span& Span::operator=(const Span& rhs) 
{
    if (this != &rhs)
    {
        this->_N = rhs._N;
        this->_vectr = rhs._vectr;
    }
    return (*this);
}

void Span::addNumber(int num)
{
    if (_vectr.size() < _N)
        _vectr.push_back(num);
    else
        throw std::exception();
}

void Span::addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
    if ( _vectr.size() > _N )
        throw std::out_of_range("Span::addNumber: list is full");
    _vectr.insert( _vectr.end(), begin, end );
}

int Span::shortestSpan()
{
    if (_vectr.size() < 2)
        throw std::exception();
    std::vector<int> v1 = _vectr;
    std::sort(v1.begin(), v1.end());
    int min = v1[1] - v1[0]; 
    for (unsigned int i = 1; i < v1.size() - 1; i++)
    {
        if (v1[i + 1] - v1[i] < min)
            min = v1[i + 1] - v1[i];
    }
    return (min);
}

int Span::longestSpan()
{
    if (_vectr.size() < 2)
        throw std::exception();
    std::vector<int> v1 = _vectr;
    std::sort(v1.begin(), v1.end());
    return (v1[v1.size() - 1] - v1[0]);
}

const std::vector<int>* Span::get_vectr() const { return &_vectr; }

std::ostream& operator<<(std::ostream& out, const Span& rhs)
{
    for ( std::vector<int>::const_iterator iter = rhs.get_vectr()->begin(); iter != rhs.get_vectr()->end(); ++iter )
        out << *iter << " ";
    return out;
}
