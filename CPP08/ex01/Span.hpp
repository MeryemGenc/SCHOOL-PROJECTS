#pragma once // ne iş ?

#include <iostream>
#include <algorithm> // gereksizse sil
#include <vector>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> _vectr;
        Span();
    public:
        Span(unsigned int N);
        ~Span();
        Span(const Span& rhs);
        Span& operator=(const Span& rhs);

        void addNumber(int num);
        void addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);

        int shortestSpan();
        int longestSpan();

        const std::vector<int>* get_vectr() const;
};

std::ostream& operator<<(std::ostream& out, const Span& rhs);
