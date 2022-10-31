#include "colors.hpp"
#include "easyfind.hpp"

int main() {
    std::cout << COLOR_ON_MAGENTA << "--VECTOR--VECTOR--VECTOR--" << END
              << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [TEST TO FILL THE VECTOR AND TRY TO FIND 1ST OCCURRENCE] "
              << std::string(20, '*') << END << std::endl;
    delimiter
        //~~~~~~~~~~~~~~~~~~~~~~~~~~~~TEST 1~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
        const int arr[] = {21, 42, 56, 3, 25, 70};
    std::vector<int> vec(sizeof(arr) / sizeof(arr[0]));
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "PRINTING [vec] VECTOR"
              << END << std::endl;
    for (std::vector<int>::size_type i = 0; i < vec.size(); i++) {
        std::cout << COLOR_BOLD_BLACK << "[vec] | ELEMENT INDEX [" << i
                  << "] : " << END << COLOR_BOLD_GREEN << (vec[i] += arr[i])
                  << " " << END << std::endl;
    }
    delimiter std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
                        << "ATTEMPT TO FIND ELEMENT [56] IN VECTOR" << END
                        << std::endl;
    std::vector<int>::iterator itr;
    int j = 0;
    try {
        itr = easyfind(vec, 21);
        for (std::vector<int>::iterator i = vec.begin(); i != itr; i++) {
            j++;
        }
        std::cout << COLOR_ON_GREEN << "SUCCESSFULLY FOUND" << END << std::endl;
        std::cout << COLOR_BOLD_GREEN
                  << "ELEMENT [56] WAS FOUND SUCCESSFULY AT INDEX : [" << j
                  << "]" << END << std::endl;
    } catch (std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << std::endl;
    }
    delimiter std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
                        << "ATTEMPT TO FIND NON-EXISTING ELEMENT [60] IN VECTOR"
                        << END << std::endl;
    try {
        itr = easyfind(vec, 60);
        std::cout << COLOR_ON_GREEN << "SUCCESSFULLY FOUND" << END << std::endl;
    } catch (std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << std::endl;
    }
    delimiter
            //~~~~~~~~~~~~~~~~~~~~~~~~~~~~TEST 2~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
            std::cout
        << COLOR_ON_MAGENTA << "--DEQUE--DEQUE--DEQUE--" << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [TEST TO FILL THE DEQUE AND TRY TO FIND 1ST OCCURRENCE] "
              << std::string(20, '*') << END << std::endl;
    delimiter std::deque<int> deq(0, 40);
    deq.push_back(10);
    deq.push_back(15);
    deq.push_front(20);
    deq.push_front(25);
    deq.push_front(30);
    std::deque<int>::iterator iter;
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "PRINTING [deq] DEQUE"
              << END << std::endl;
    for (std::deque<int>::size_type i = 0; i < deq.size(); i++) {
        std::cout << COLOR_BOLD_BLACK << "[deq] | ELEMENT INDEX [" << i
                  << "] : " << END << COLOR_BOLD_GREEN << deq[i] << " " << END
                  << std::endl;
    }
    delimiter std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
                        << "ATTEMPT TO FIND ELEMENT [42] IN DEQUE" << END
                        << std::endl;
    try {
        iter = easyfind(deq, 19);
        std::cout << COLOR_ON_GREEN << "SUCCESSFULLY FOUND" << END << std::endl;
    } catch (std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << std::endl;
    }
    delimiter
            //~~~~~~~~~~~~~~~~~~~~~~~~~~~~TEST 3~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
            std::cout
        << COLOR_ON_MAGENTA << "--LIST--LIST--LIST--" << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [TEST TO FILL THE LIST AND TRY TO FIND 1ST OCCURRENCE] "
              << std::string(20, '*') << END << std::endl;
    delimiter std::list<int> lst(0, 40);
    lst.push_back(10);
    lst.push_back(15);
    lst.push_front(20);
    lst.push_front(25);
    lst.push_front(30);
    std::list<int>::iterator iterat_r;
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "PRINTING [lst] LIST"
              << END << std::endl;
    for (std::list<int>::size_type i = 0; i < lst.size(); i++) {
        std::cout << COLOR_BOLD_BLACK << "[lst] | ELEMENT INDEX [" << i
                  << "] : " << END << COLOR_BOLD_GREEN << deq[i] << " " << END
                  << std::endl;
    }
    delimiter std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
                        << "ATTEMPT TO FIND ELEMENT [10] IN LIST" << END
                        << std::endl;
    j = 0;
    try {
        iterat_r = easyfind(lst, 10);
        for (std::list<int>::iterator i = lst.begin(); i != iterat_r; i++) {
            j++;
        }
        std::cout << COLOR_ON_GREEN << "SUCCESSFULLY FOUND" << END << std::endl;
        std::cout << COLOR_BOLD_GREEN
                  << "ELEMENT [10] WAS FOUND SUCCESSFULY AT INDEX : [" << j
                  << "]" << END << std::endl;
    } catch (std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << std::endl;
    }
    delimiter j = 0;
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
              << "ATTEMPT TO FIND ELEMENT [20] IN LIST" << END << std::endl;
    try {
        iterat_r = easyfind(lst, 20);
        for (std::list<int>::iterator i = lst.begin(); i != iterat_r; i++) {
            j++;
        }
        std::cout << COLOR_ON_GREEN << "SUCCESSFULLY FOUND" << END << std::endl;
        std::cout << COLOR_BOLD_GREEN
                  << "ELEMENT [20] WAS FOUND SUCCESSFULY AT INDEX : [" << j
                  << "]" << END << std::endl;
    } catch (std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << std::endl;
    }
    delimiter j = 0;
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
              << "ATTEMPT TO FIND NON_EXISTING ELEMENT [19] IN LIST" << END
              << std::endl;
    try {
        iterat_r = easyfind(lst, 19);
        for (std::list<int>::iterator i = lst.begin(); i != iterat_r; i++) {
            j++;
        }
        std::cout << COLOR_ON_GREEN << "SUCCESSFULLY FOUND" << END << std::endl;
        std::cout << COLOR_BOLD_GREEN
                  << "ELEMENT [19] WAS FOUND SUCCESSFULY AT INDEX : [" << j
                  << "]" << END << std::endl;
    } catch (std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << std::endl;
    }
    delimiter
}