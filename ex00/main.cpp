#include "easyfind.hpp"
#include "colors.hpp"


// template <typename T>
// void print(T container_element) {
// 	std::cout << 
// }






int main () {
	std::cout << COLOR_ON_MAGENTA << "--VECTOR--VECTOR--VECTOR--" << END << std::endl;
	std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [TEST TO FILL THE VECTOR AND TRY TO FIND 1ST OCCURRENCE] " << std::string(20, '*') << END
              << std::endl;
	delimiter
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~TEST 1~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
	const int arr[] = {21, 42, 56, 3, 25, 70};
	std::vector<int> vec(sizeof(arr) / sizeof(arr[0])); 
	std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "PRINTING [vec] VECTOR" << END << std::endl;
	for (std::vector<int>::size_type i = 0; i < vec.size(); i++) {
		std::cout << COLOR_BOLD_BLACK << "[vec] | ELEMENT INDEX [" << i << "] : " << END << COLOR_BOLD_GREEN << (vec[i] += arr[i]) << " " << END << std::endl;
	}
	delimiter
	std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "ATTEMPT TO FIND ELEMENT [56] IN VECTOR" << END << std::endl;
	std::vector<int>::iterator itr;
	int j = 0;
	try {
		itr = easyfind(vec, 21);
		for (std::vector<int>::iterator i = vec.begin(); i != itr; i++) {
			j++;
	}
		std::cout << COLOR_ON_GREEN << "SUCCESSFULLY FOUND" << END << std::endl;
		std::cout << COLOR_BOLD_GREEN << "ELEMENT [56] WAS FOUND SUCCESSFULY AT INDEX : [" << j << "]" << END << std::endl;
	}
	catch (std::exception &error) {
		std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what() << std::endl;
	}
	delimiter
	std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "ATTEMPT TO FIND NON-EXISTING ELEMENT [60] IN VECTOR" << END << std::endl;
	try {
		itr = easyfind(vec, 60);
		std::cout << COLOR_ON_GREEN << "SUCCESSFULLY FOUND" << END << std::endl;
	}
	catch (std::exception &error) {
		std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what() << std::endl;
	}
	delimiter
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~TEST 2~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
		std::cout << COLOR_ON_MAGENTA << "--DEQUE--DEQUE--DEQUE--" << END << std::endl;
	std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [TEST TO FILL THE DEQUE AND TRY TO FIND 1ST OCCURRENCE] " << std::string(20, '*') << END
              << std::endl;
	delimiter
	std::deque<int> deq(7, 42);
	std::deque<int>::iterator iter;
	std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE << "PRINTING [deq] DEQUE" << END << std::endl;
	for (std::vector<int>::size_type i = 0; i < deq.size(); i++) {
		std::cout << COLOR_BOLD_BLACK << "[deq] | ELEMENT INDEX [" << i << "] : " << END << COLOR_BOLD_GREEN << deq[i] << " " << END << std::endl;
	}
	delimiter
}