#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
#include "colors.hpp"

class Span {
   private:
    int _N;
    int _max_N;
    std::vector<int> _vector;

   public:
    // Default constructor
    Span();
    // Parameterized constructor with only one parameter passed to the
    // constructor
    Span(unsigned int param_N);
    // Copy constructor
    Span(const Span &src);
    // Copy assignment constructor
    Span &operator=(const Span &src);
    // Destructor
    ~Span();

    // if there are no nbs stored, or only 1, no span can be found. Throw an
    // exception
    class FillingSpanException : public std::exception {
        virtual const char *what() const throw();
    };
    class MinimumNotFoundException : public std::exception {
        virtual const char *what() const throw();
    };

    // HELPER FUNCTIONS

    // addNumber() adds a single number to the Span.
    // if there are already N elements stored while trying to addNumber(), the
    // exception should be thrown
    void addNumber(int nb);

    // shortestSpan() finds out the shortest span between all the nbs stored and
    // returns it.
    int shortestSpan();

    // longestSpan() finds out the shortest span between all the nbs stored and
    // returns it.
    int longestSpan();

    // getSize() return the current size of the array
    int getSize(void);

    // getContent() gets the value of attribute
    int getContent(int idx);

    // insertToVector() inserts additional elements to vector
    void insertToVector(std::vector<int> elem_to_insert);
};

#endif