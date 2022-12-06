CXX= c++

CXXFLAGS= -Wall -Wextra -Werror --std=c++98

HEADER= Array.hpp

SRCS= main.cpp

NAME= Array

OBJS= ${SRCS:.cpp=.o}

${NAME}: ${OBJS} ${HEADER}
		${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean
	make all

.POHNY: all clean fclean re