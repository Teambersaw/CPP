CC= c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

HEADER= sed.hpp

SRCS= main.cpp sed.cpp

OBJS= ${SRCS:.cpp=.o}

NAME= sed

${NAME}: ${OBJS} ${HEADER}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
