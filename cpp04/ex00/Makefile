CXX= c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

HEADER= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

SRCS= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJS= ${SRCS:.cpp=.o}

NAME= Polymorphisme

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
