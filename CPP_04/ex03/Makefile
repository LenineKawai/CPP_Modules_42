SRCS	=	main.cpp					\
			/srcs/AMateria.cpp			\
			/srcs/Ice.cpp				\
			/srcs/Cure.cpp				\
			/srcs/ICharacter.cpp		\
			/srcs/MateriaSource.cpp		

INCL	=	/includes/AMateria.hpp		\
			/includes/Ice.hpp			\
			/includes/Cure.hpp			\
			/includes/ICharacter.hpp	\
			/includes/MateriaSource.hpp			

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

RM		= rm -f

OBJS	= $(SRCS:.cpp=.o)

NAME	= Brains

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