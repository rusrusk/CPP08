//----------------------Default Constructor----------------------//
template <typename T>
MutantStack<T>::MutantStack() {
    std::cout << "Default constructor was called" << std::endl;
}

//----------------------Copy Constructor----------------------//
template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &src) {
    *this = src;
    std::cout << "Copy constructor was called" << std::endl;
}

//----------------------Copy Assignment Operator----------------------//
template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &src) {
    if (this != &src) std::stack<T>::operator=(src);
    std::cout << "Copy assignment operator was called" << std::endl;
    return *this;
}

//----------------------Destructor----------------------//
template <typename T>
MutantStack<T>::~MutantStack() {
    std::cout << "Destructor was called" << std::endl;
}
