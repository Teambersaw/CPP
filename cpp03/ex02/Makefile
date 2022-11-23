CXX= c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

HEADER= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

SRCS= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS= ${SRCS:.cpp=.o}

NAME= FragTrap

${NAME}: ${OBJS} ${HEADER}
		${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean
	make all

.PHONY: all clean fclean re
