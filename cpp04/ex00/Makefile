CC= c++

CFLAGS= -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

HEADER= Animal.hpp Cat.hpp Dog.hpp

SRCS= main.cpp Animal.cpp Cat.cpp Dog.cpp

OBJS= ${SRCS:.cpp=.o}

NAME= Polymorphisme

${NAME}: ${OBJS} ${HEADER}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
