#include "MutantStack.hpp"

int main() {
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*') << " [TEST] "
              << std::string(20, '*') << END << std::endl;
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
              << "CREATING NEW INSTANCE OF MUTANTSTACK OBJECT" << END
              << std::endl;
    delimiter MutantStack<int> mutant_stack;
    delimiter std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
                        << "PUSHING 5 ELEMENTS TO THE [mutant_stack]" << END
                        << std::endl;
    delimiter try {
        mutant_stack.push(10);
        mutant_stack.push(20);
        mutant_stack.push(30);
        mutant_stack.push(40);
        mutant_stack.push(50);
        std::cout << COLOR_ON_GREEN << "ELEMENTS WERE SUCCESSFULLY ADDED!"
                  << END << std::endl;
    } catch (const std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << END << std::endl;
    }

    MutantStack<int>::itr itr_start = mutant_stack.begin();
    MutantStack<int>::itr itr_end = mutant_stack.end();

    delimiter std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
                        << "DISPLAYING [mutant_stack] WITH ELEMENTS" << END
                        << std::endl;
    delimiter for (int i = 0; itr_start != itr_end; i++) {
        std::cout << COLOR_BOLD_BLACK << "[mutant_stack] INDEX |" << END
                  << COLOR_BOLD_GREEN << "[" << i << "]\t " << END
                  << COLOR_BOLD_BLACK << "[mutant_stack] VALUE | " << END
                  << COLOR_BOLD_GREEN << "[" << *itr_start++ << "]" << END
                  << std::endl;
    }
    delimiter std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
                        << "COMPARISON [mutant_stack] WITH LIST" << END
                        << std::endl;
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
              << "CREATING STD::LIST AND POPULATING WITH VALUES" << END
              << std::endl;
    delimiter std::list<int> lst;
    try {
        lst.push_back(10);
        lst.push_back(20);
        lst.push_back(30);
        lst.push_back(40);
        lst.push_back(50);
        std::cout << COLOR_ON_GREEN << "ELEMENTS WERE SUCCESSFULLY ADDED!"
                  << END << std::endl;
    } catch (const std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << END << std::endl;
    }
    delimiter std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
                        << "DISPLAYING STD::LIST WITH ELEMENTS" << END
                        << std::endl;
    delimiter int j = -1;
    for (std::list<int>::iterator i = lst.begin(); i != lst.end(); i++) {
        j++;
        std::cout << COLOR_BOLD_BLACK << "[lst] INDEX |" << END
                  << COLOR_BOLD_GREEN << "[" << j << "]\t " << END
                  << COLOR_BOLD_BLACK << "[lst] VALUE | " << END
                  << COLOR_BOLD_GREEN << "[" << *i << "]" << END << std::endl;
    }
    delimiter
}

// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);

// mstack.push(0);
// MutantStack<int>::itr it = mstack.begin();
// MutantStack<int>::itr ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// return 0;
// }