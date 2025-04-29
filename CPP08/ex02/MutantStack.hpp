#pragma once

#include <iostream>
#include <stack>
#include <deque>
// #include <string>


// amaç: stack tipi 1 class oluştur ama iteratörü de olsun. (normalde stack in iterator ü yok.)


template <typename T>
class MutantStack: public std::stack<T> // _Sequence c; -> c.begin() - c.end() -> _Sequence: template<typename _Tp, typename _Sequence = deque<_Tp> > => yaniiii c: stack sınıfı içerisinde oluşturulmuş - template değişkenler için 1 dequeue değişken diyebiliriz.
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(MutantStack const & src) : std::stack<T>(src) {}
        ~MutantStack() {}
        // virtual ~MutantStack() {}

        typedef typename std::deque<T>::iterator iterator;
        iterator begin() { return this->c.begin(); }

        iterator end() { return this->c.end(); }

};

