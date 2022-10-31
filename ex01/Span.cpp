#include "Span.hpp"

//----------------------Default Constructor----------------------//
Span::Span() : _N(0), _max_N(0) {
    std::cout << "[Span] Default constructor was called" << std::endl;
}

//----------------------Parameterized Constructor----------------------//
Span::Span(unsigned int param_N) : _N(0), _max_N(param_N) {
    std::cout << "[Span] Parameterized constructor was called" << std::endl;
}

//----------------------Copy Constructor----------------------//
Span::Span(const Span &src) {
    *this = src;
    std::cout << "[Span] Copy constructor was called" << std::endl;
}

//----------------------Copy Assignment Operator----------------------//
Span &Span::operator=(const Span &src) {
    if (this != &src) {
        this->_vector = src._vector;
        this->_N = src._N;
        this->_max_N = src._max_N;
    }
    std::cout << "[Span] Copy Assignment was called" << std::endl;
    return (*this);
}

//----------------------Destructor----------------------//
Span::~Span() { std::cout << "[Span] Destructor was called" << std::endl; }

//----------------------addNumber()----------------------//
void Span::addNumber(int nb) {
    if (this->_N < this->_max_N) {
        this->_vector.push_back(nb);
        this->_N++;
    } else
        throw Span::FillingSpanException();
}

//----------------------shortestSpan() and longestSpan()----------------------//
int Span::shortestSpan() {
    if (this->_vector.size() <= 1) throw Span::MinimumNotFoundException();
    std::vector<int> temp = this->_vector;
    std::sort(temp.begin(), temp.end());
    unsigned int shortest_span = *(temp.begin() + 1) - *temp.begin();
    for (std::vector<int>::iterator itr = temp.begin(); itr != temp.end() - 1;
         itr++) {
        shortest_span = std::min(shortest_span,
                                 static_cast<unsigned int>(*(itr + 1) - *itr));
    }
    return shortest_span;
}

int Span::longestSpan() {
    if (this->_vector.size() <= 1) throw Span::MinimumNotFoundException();
    int min = *std::min_element(this->_vector.begin(), this->_vector.end());
    int max = *std::max_element(this->_vector.begin(), this->_vector.end());
    // std::cout << "min : " << min << "\t max : " << max << std::endl;
    return (static_cast<int>(max - min));
}

//----------------------Class exception definitions----------------------//
const char *Span::FillingSpanException::what() const throw() {
    return ("EXCEPTION : FAILED TO ADD NEW ELEMENTS! OUT OF BOUNDARIES!");
}

const char *Span::MinimumNotFoundException::what() const throw() {
    return ("EXCEPTION : THE AMOUNT OF NUMBERS STORED IS TOO SMALL!");
}

//----------------------Getters----------------------//
int Span::getSize(void) { return (this->_vector.size()); }

int Span::getContent(int idx) { return (this->_vector[idx]); }

//----------------------Insertion to vector----------------------//
void Span::insertToVector(std::vector<int> elem_to_insert) {
    this->_vector.insert(this->_vector.end(), elem_to_insert.begin(),
                         elem_to_insert.end());
}