#include "Span.hpp"

int main() {
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [TEST WITH NON-EMPTY ARRAY] " << std::string(20, '*') << END
              << std::endl;
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
              << "ADDING 7 ELEMENTS TO VECTOR" << END << std::endl;
    delimiter Span span1(7);
    try {
        span1.addNumber(100);
        span1.addNumber(48);
        span1.addNumber(-271);
        span1.addNumber(88);
        span1.addNumber(156);
        span1.addNumber(-12);
        span1.addNumber(450);
        std::cout << COLOR_ON_GREEN << "ELEMENTS WERE SUCCESSFULLY ADDED!"
                  << END << std::endl;
    } catch (const std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << END << std::endl;
    }
    delimiter std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
                        << "PRINTING ELEMENTS OF VECTOR" << END << std::endl;
    delimiter for (int i = 0; i < span1.getSize(); i++) {
        std::cout << COLOR_BOLD_BLACK << "[span] INDEX |" << END
                  << COLOR_BOLD_GREEN << "[" << i << "]\t " << END
                  << COLOR_BOLD_BLACK << "[span] VALUE | " << END
                  << COLOR_BOLD_GREEN << "[" << span1.getContent(i) << "]"
                  << END << std::endl;
    }
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
              << "EXAMINING THE SHORTEST SPAN" << END << std::endl;
    delimiter try {
        std::cout << COLOR_BOLD_BLACK << "Shortest span of [span1] is :" << END
                  << COLOR_BOLD_MAGENTA << "[" << span1.shortestSpan() << "]"
                  << END << std::endl;
        std::cout << COLOR_ON_GREEN
                  << "SHORTEST SPAN WAS SUCCESSFULLY ACQUIRED!" << END
                  << std::endl;
    } catch (const std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << END << std::endl;
    }
    delimiter std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
                        << "EXAMINING THE LONGEST SPAN" << END << std::endl;
    delimiter try {
        std::cout << COLOR_BOLD_BLACK << "Longest span of [span1] is :" << END
                  << COLOR_BOLD_MAGENTA << "[" << span1.longestSpan() << "]"
                  << END << std::endl;
        std::cout << COLOR_ON_GREEN << "LONGEST SPAN WAS SUCCESSFULLY ACQUIRED!"
                  << END << std::endl;
    } catch (const std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << END << std::endl;
    }
    //----------------------TESTING COPY CONSTRUCTOR AND ASSIGNMENT
    //OPERATOR//----------------------//
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [TEST WITH COPY CONSTRUCTOR AND COPY ASSIGNMENT OPERATOR] "
              << std::string(20, '*') << END << std::endl;
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
              << "INVOKE COPY CONSTRUCTOR COPYING CONTENT OF [span_1] TO NEWLY "
                 "CREATED OBJECT [span_copy]"
              << END << std::endl;
    delimiter Span span_copy(span1);
    delimiter std::cout
        << COLOR_BOLD_CYAN << COLOR_UNDERLINE
        << "INVOKE COPY ASSIGNMENT OPERATOR ASSIGNING [span_copy] TO NEWLY "
           "CREATED OBJECT [span_copy_assign]"
        << END << std::endl;
    delimiter Span span_copy_assign;
    span_copy_assign = span_copy;
    delimiter std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
                        << "DISPLAY SHORTEST AND LONGEST SPANS OF [span_copy]"
                        << END << std::endl;
    delimiter try {
        std::cout << COLOR_BOLD_BLACK
                  << "Shortest span of [span_copy] is :" << END
                  << COLOR_BOLD_MAGENTA << "[" << span_copy.shortestSpan()
                  << "]" << END << std::endl;
        std::cout << COLOR_ON_GREEN
                  << "SHORTEST SPAN WAS SUCCESSFULLY ACQUIRED!" << END
                  << std::endl;

        std::cout << COLOR_BOLD_BLACK
                  << "Longest span of [span_copy] is :" << END
                  << COLOR_BOLD_MAGENTA << "[" << span_copy.longestSpan() << "]"
                  << END << std::endl;
        std::cout << COLOR_ON_GREEN << "LONGEST SPAN WAS SUCCESSFULLY ACQUIRED!"
                  << END << std::endl;
    } catch (const std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << END << std::endl;
    }
    delimiter std::cout
        << COLOR_BOLD_CYAN << COLOR_UNDERLINE
        << "DISPLAY SHORTEST AND LONGEST SPANS OF [span_copy_assign]" << END
        << std::endl;
    delimiter try {
        std::cout << COLOR_BOLD_BLACK
                  << "Shortest span of [span_copy_assign] is :" << END
                  << COLOR_BOLD_MAGENTA << "["
                  << span_copy_assign.shortestSpan() << "]" << END << std::endl;
        std::cout << COLOR_ON_GREEN
                  << "SHORTEST SPAN WAS SUCCESSFULLY ACQUIRED!" << END
                  << std::endl;

        std::cout << COLOR_BOLD_BLACK
                  << "Longest span of [span_copy_assign] is :" << END
                  << COLOR_BOLD_MAGENTA << "[" << span_copy_assign.longestSpan()
                  << "]" << END << std::endl;
        std::cout << COLOR_ON_GREEN << "LONGEST SPAN WAS SUCCESSFULLY ACQUIRED!"
                  << END << std::endl;
    } catch (const std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << END << std::endl;
    }
    //----------------------TESTING INSERTION//----------------------//
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [TEST WITH INSERTION ADDITIONAL ELEMENT AND DEFINING "
                 "SHORTEST AND LONGEST SPANS INCLUDING NEW ELEMENT] "
              << std::string(20, '*') << END << std::endl;
    std::cout
        << COLOR_BOLD_CYAN << COLOR_UNDERLINE
        << "INSERT NEW ELEM [103] to [span_copy_assign] AT POSITION INDEX[6]"
        << END << std::endl;
    delimiter std::vector<int> insert_elem(1, 103);
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
              << "DISPLAY THE RESULT ELEMENTS AFTER INSERTION" << END
              << std::endl;
    delimiter span_copy_assign.insertToVector(insert_elem);
    for (int i = 0; i < span_copy_assign.getSize(); i++) {
        std::cout << COLOR_BOLD_BLACK << "[span_copy_assign] INDEX |" << END
                  << COLOR_BOLD_GREEN << "[" << i << "]\t " << END
                  << COLOR_BOLD_BLACK << "[span_copy_assign] VALUE | " << END
                  << COLOR_BOLD_GREEN << "[" << span_copy_assign.getContent(i)
                  << "]" << END << std::endl;
    }
    delimiter std::cout
        << COLOR_BOLD_CYAN << COLOR_UNDERLINE
        << "DISPLAYING THE SHORTEST AND LONGEST SPANS AFTER INSERTION" << END
        << std::endl;
    delimiter try {
        std::cout << COLOR_BOLD_BLACK
                  << "Shortest span of [span_copy_assign] is :" << END
                  << COLOR_BOLD_MAGENTA << "["
                  << span_copy_assign.shortestSpan() << "]" << END << std::endl;
        std::cout << COLOR_ON_GREEN
                  << "SHORTEST SPAN WAS SUCCESSFULLY ACQUIRED!" << END
                  << std::endl;

        std::cout << COLOR_BOLD_BLACK
                  << "Longest span of [span_copy_assign] is :" << END
                  << COLOR_BOLD_MAGENTA << "[" << span_copy_assign.longestSpan()
                  << "]" << END << std::endl;
        std::cout << COLOR_ON_GREEN << "LONGEST SPAN WAS SUCCESSFULLY ACQUIRED!"
                  << END << std::endl;
    } catch (const std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << END << std::endl;
    }
    //----------------------TESTING INSERTION WITH 50.000 VALUES OF 200 TO
    //SPAN//----------------------//
    delimiter std::cout
        << COLOR_BOLD_YELLOW << std::string(20, '*')
        << " [TEST WITH INSERTION 50.000 VALUES OF 900 TO SPAN] "
        << std::string(20, '*') << END << std::endl;
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
              << "INSERT 50.000 VALUES OF [900] to [span1]" << END << std::endl;
    delimiter std::vector<int> insert_elems(50000, 900);
    span1.insertToVector(insert_elems);
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
              << "PRINTING THE SIZE OF [span1]" << END << std::endl;
    delimiter std::cout << COLOR_BOLD_BLACK << "Size of [span1] now is : ["
                        << END << COLOR_MAGENTA << span1.getSize() << "]" << END
                        << std::endl;
    delimiter std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
                        << "DISPLAY THE LONGEST SPAN" << END << std::endl;
    delimiter try {
        std::cout << COLOR_BOLD_BLACK
                  << "Longest span of [span_copy_assign] is :" << END
                  << COLOR_BOLD_MAGENTA << "[" << span1.longestSpan() << "]"
                  << END << std::endl;
        std::cout << COLOR_ON_GREEN << "LONGEST SPAN WAS SUCCESSFULLY ACQUIRED!"
                  << END << std::endl;
    } catch (const std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << END << std::endl;
    }
    delimiter delimiter delimiter

            //----------------------TESTING EXCEPTION HANDLING
            //ERRORS//----------------------//
            //----------------------CASE 1----------------------//
                std::cout
        << COLOR_BOLD_YELLOW << std::string(20, '*')
        << " [TEST WITH EMPTY VECTOR] " << std::string(20, '*') << END
        << std::endl;
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
              << "CREATING [span_dup] WITH SIZE 0" << END << std::endl;
    Span span_dup;
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
              << "TRYING TO ADD ELEMENT TO [span_dup]" << END << std::endl;
    try {
        span_dup.addNumber(42);
        std::cout << COLOR_ON_GREEN << "ELEMENTS WERE SUCCESSFULLY ADDED!"
                  << END << std::endl;
    } catch (const std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << END << std::endl;
    }
    delimiter
            //----------------------CASE 2----------------------//
            std::cout
        << COLOR_BOLD_YELLOW << std::string(20, '*')
        << " [TEST WITH ADDING ONE ADDITIONAL ELEMENT TO VECTOR] "
        << std::string(20, '*') << END << std::endl;
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
              << "CREATING [span_dup1] WITH SIZE 5" << END << std::endl;
    Span span_dup1(5);
    std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
              << "TRYING TO ADD 5 ELEMENTS TO [span_dup1]" << END << std::endl;
    try {
        span_dup1.addNumber(42);
        span_dup1.addNumber(67);
        span_dup1.addNumber(45);
        span_dup1.addNumber(98);
        span_dup1.addNumber(34);
        std::cout << COLOR_ON_GREEN << "ELEMENTS WERE SUCCESSFULLY ADDED!"
                  << END << std::endl;
    } catch (const std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << END << std::endl;
    }
    delimiter std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
                        << "PRINTING ELEMENTS OF [span_dup1] VECTOR" << END
                        << std::endl;
    delimiter for (int i = 0; i < span_dup1.getSize(); i++) {
        std::cout << COLOR_BOLD_BLACK << "[span_dup1] INDEX |" << END
                  << COLOR_BOLD_GREEN << "[" << i << "]\t " << END
                  << COLOR_BOLD_BLACK << "[span_dup1] VALUE | " << END
                  << COLOR_BOLD_GREEN << "[" << span_dup1.getContent(i) << "]"
                  << END << std::endl;
    }
    delimiter std::cout << COLOR_BOLD_CYAN << COLOR_UNDERLINE
                        << "ATTEMPT TO ADD ADDITIONAL ELEMENT [20]" << END
                        << std::endl;
    try {
        span_dup1.addNumber(20);
        std::cout << COLOR_ON_GREEN << "ELEMENT WAS SUCCESSFULLY ADDED!" << END
                  << std::endl;
    } catch (const std::exception &error) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << error.what()
                  << END << std::endl;
    }
    delimiter
}

// int main () {
// 	delimiter
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	delimiter
// }