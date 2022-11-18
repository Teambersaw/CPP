CXX= c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

HEADER= AMateria.hpp ICharater.hpp Ice.hpp Cure.hpp

SRCS= main.cpp AMateria.cpp ICharater.cpp Ice.cpp Cure.cpp

OBJS= ${SRCS:.cpp=.o}

NAME= Interface

${NAME}: ${OBJS} ${HEADER}
		${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
