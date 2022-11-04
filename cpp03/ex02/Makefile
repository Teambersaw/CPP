CC= c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

HEADER= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

SRCS= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS= ${SRCS:.cpp=.o}

NAME= FragTrap

${NAME}: ${OBJS} ${HEADER}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
