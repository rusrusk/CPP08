NAME			=			span

CC				=			c++

CFLAGS			=			-Wall -Wextra -Werror --std=c++98

RM				=			rm -rf

SRCS			=			main.cpp Span.cpp

OBJSDIR			=			objs

OBJS			=			$(SRCS:%.cpp=$(OBJSDIR)/%.o)

all				:			$(NAME)

$(NAME) : $(OBJS)
		@echo "$(RED)COMPILATION PROCESS [$(NAME)]...$(UNDO_COL)"
		$(CC) $(OBJS) -o $(NAME)
		@echo "$(GREEN)[$(NAME)] WAS SUCCESSFULLY CREATED!$(UNDO_COL)"

$(OBJSDIR)/%.o : %.cpp
		mkdir -p '$(@D)'
		$(CC) $(CFLAGS) -c $< -o $@

clean : 
		$(RM) $(OBJS)
		$(RM) $(OBJSDIR)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean re

GREEN = \033[0;32m
RED = \033[0;31m
UNDO_COL = \033[0m