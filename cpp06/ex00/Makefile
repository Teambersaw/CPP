CXX= c++

CXXFLAGS= -Wall -Wextra -std=c++98

HEADER= 

SRCS= 

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
