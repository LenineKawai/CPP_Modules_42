SRCS	=	main.cpp		\
			Bureaucrat.cpp	\
			Intern.cpp	\
			ShrubberyCreationForm.cpp	\
			RobotomyRequestForm.cpp	\
			PresidentialPardonForm.cpp	\
			Form.cpp	

INCL	=	Bureaucrat.hpp	\
			Intern.hpp	\
			ShrubberyCreationForm.hpp	\
			RobotomyRequestForm.hpp	\
			PresidentialPardonForm.hpp	\
			Form.hpp	

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

RM		= rm -f

OBJS	= $(SRCS:.cpp=.o)

NAME	= MacronsWetDream

%.o: %.cpp $(INCL) Makefile
	$(CC) -c $< -o $@ $(FLAGS)

all 	: $(NAME)

$(NAME)	: $(OBJS) $(INCL) Makefile
	$(CC) -o $(NAME) $(OBJS) $(FLAGS)

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re		: fclean $(NAME)

.PHONY	: make clean fclean all re