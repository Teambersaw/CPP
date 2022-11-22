CXX= c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -MMD

HEADER= Fixed.hpp

SRCS= main.cpp Fixed.cpp

OBJS= ${SRCS:.cpp=.o}

OBJD= ${SRCS:.cpp=.d}

NAME= Fixed

${NAME}: ${OBJS} ${HEADER}
		${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS} ${OBJD}

fclean: clean
	rm -f ${NAME}

re: fclean 
	make all

-include ${OBJD}

.PHONY: all clean fclean re
