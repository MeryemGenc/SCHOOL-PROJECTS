#include "Span.hpp"

int main()
{
    {
        std::cout << "\n\n\n--------------------------------------- TEST 1 ---------------------------------------\n\n";
        try
        {
            Span sp = Span(3); // dynamic memory control
            // std::vector<int> v1 = {4, 2, 5, 6, 8}; -> not fit with -c++98
            std::vector<int> v1;
            v1.push_back(6);
            v1.push_back(3);
            v1.push_back(17);
            v1.push_back(9);
            v1.push_back(11);
            sp.addNumber(456);
            sp.addNumber(v1.begin(), v1.end());
            std::cout << "Span: " << sp << std::endl;
            std::cout << "Shortest Span: "<< sp.shortestSpan() << std::endl;
            std::cout << "Longest Span: "<< sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << "exception found " << e.what() << '\n';
        }
    }
    {
        std::cout << "\n\n\n--------------------------------------- TEST 2 ---------------------------------------\n\n";
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
}
