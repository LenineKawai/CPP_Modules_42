SRCS	=	main.cpp	

INCL	=   easyfind.hpp

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic -fsanitize=address -g3

RM		= rm -f

OBJS	= $(SRCS:.cpp=.o)

NAME	= feur

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