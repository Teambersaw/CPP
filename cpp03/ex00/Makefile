CXX= c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

HEADER= ClapTrap.hpp

SRCS= main.cpp ClapTrap.cpp

OBJS= ${SRCS:.cpp=.o}

NAME= Action

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
