#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <iostream>
#include <list>
#include <stack>

#include "colors.hpp"

template <typename T>
class MutantStack : public std::stack<T> {
   public:
    // Default constructor
    MutantStack();
    // Copy constructor
    MutantStack(const MutantStack<T> &src);
    // Copy assignment constructor
    MutantStack &operator=(const MutantStack<T> &src);
    // Destructor
    ~MutantStack();

    // Iterator
    typedef typename std::stack<T>::container_type::iterator itr;

    itr begin() { return this->c.begin(); }
    itr end() { return this->c.end(); }
};

#include "MutantStack.tpp"

#endif