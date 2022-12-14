#ifndef COLORS_HPP
# define COLORS_HPP

#define delimiter                                                  \
    std::cout << COLOR_BOLD << COLOR_BRIGHT_DARK_GREY \
              << std::string(60, '=') << END << std::endl;

#define END "\033[0m"
#define COLOR_BOLD "\033[1m"
#define COLOR_FAINT "\033[2m"
#define COLOR_ITALIC "\033[3m"
#define COLOR_UNDERLINE "\033[4m"
#define COLOR_BLINK "\033[5m"
#define COLOR_STRIKETHROUGH "\033[9m"



#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_WHITE "\033[37m"
#define COLOR_CYAN "\033[36m"
#define COLOR_GREY "\033[30m"


#define COLOR_BRIGHT_DARK_GREY "\033[90m"
#define COLOR_BRIGHT_RED "\033[91m"
#define COLOR_BRIGHT_GREEN "\033[92m"
#define COLOR_BRIGHT_YELLOW "\033[93m"
#define COLOR_BRIGHT_BLUE "\033[94m"
#define COLOR_BRIGHT_MAGENTA "\033[95m"
#define COLOR_BRIGHT_CYAN "\033[96m"


#define COLOR_ON_BLACK "\033[40m"
#define COLOR_ON_RED "\033[41m"
#define COLOR_ON_GREEN "\033[42m"
#define COLOR_ON_YELLOW "\033[43m"
#define COLOR_ON_BLUE "\033[44m"
#define COLOR_ON_MAGENTA "\033[45m"
#define COLOR_ON_CYAN "\033[46m"


#define COLOR_BOLD_BLACK "\033[1m\033[30m"
#define COLOR_BOLD_RED "\033[1m\033[31m"
#define COLOR_BOLD_GREEN "\033[1m\033[32m"
#define COLOR_BOLD_YELLOW "\033[1m\033[33m"
#define COLOR_BOLD_BLUE "\033[1m\033[34m"
#define COLOR_BOLD_MAGENTA "\033[1m\033[35m"
#define COLOR_BOLD_CYAN "\033[1m\033[36m"



# endif