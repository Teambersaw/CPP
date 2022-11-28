CXX= c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

HEADER= AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp MateriaSource.hpp IMateriaSource.hpp

SRCS= main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

NAME= Materia

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
