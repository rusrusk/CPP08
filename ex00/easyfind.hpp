#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <deque>
#include <iostream>
#include <list>
#include <vector>

//---------------Exception Class---------------//
class NotFoundException : public std::exception {
    const char *what() const throw() {
        return ("EXCEPTION : NO OCCURRENCE WAS FOUND!");
    };
};

// easyfind() takes two parameters and returns type T::iterator.
// easyfind() attempts to find first occurrence of the 2nd parameter in the 1st
// parameter. throws an exception if not found, otherwise returns an iterator to
// the 1st occurrence of [toFind].
template <typename T>
typename T::iterator easyfind(T &iterator, int toFind) {
    typename T::iterator exists;
    exists = std::find(std::begin(iterator), std::end(iterator), toFind);
    if (exists == std::end(iterator))
        throw NotFoundException();
    else
        return exists;
}

#endif