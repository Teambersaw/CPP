CXX= c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

HEADER= Bureaucrat.hpp

SRCS= main.cpp Bureaucrat.cpp

NAME= Bureaucrat

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
