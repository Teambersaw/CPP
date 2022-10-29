CC= c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

HEADER= Zombie.hpp

SRCS= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS= ${SRCS:.cpp=.o}

NAME= Zombie

${NAME}: ${OBJS} ${HEADER}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
