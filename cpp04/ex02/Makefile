CC= c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

HEADER= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

SRCS= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJS= ${SRCS:.cpp=.o}

NAME= Abstract

${NAME}: ${OBJS} ${HEADER}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
