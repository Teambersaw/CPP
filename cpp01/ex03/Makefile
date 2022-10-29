CC= c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

HEADER= Weapon.hpp HumanA.hpp HumanB.hpp

SRCS= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS= ${SRCS:.cpp=.o}

NAME= Weapon

${NAME}: ${OBJS} ${HEADER}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
