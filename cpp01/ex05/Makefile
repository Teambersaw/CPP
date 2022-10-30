CC= c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

HEADER= Harl.hpp

SRCS= main.cpp Harl.cpp

OBJS= ${SRCS:.cpp=.o}

NAME= Harl

${NAME}: ${OBJS} ${HEADER}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
