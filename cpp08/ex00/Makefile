CXX= c++

CXXFLAGS= -Wall -Wextra -Werror --std=c++98

HEADER= easyfind.hpp

SRCS= main.cpp

NAME= EasyFind

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