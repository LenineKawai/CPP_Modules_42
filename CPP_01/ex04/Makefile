SRCS	=	main.cpp

INCL	=	sed.hpp

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

RM		= rm -f

OBJS	= $(SRCS:.cpp=.o)

NAME	= sedatif

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