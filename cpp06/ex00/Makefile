CXX= c++

CXXFLAGS= -Wall -Wextra -Werror --std=c++98

HEADER= Convert.hpp

SRCS= main.cpp Convert.cpp

NAME= Convert

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
