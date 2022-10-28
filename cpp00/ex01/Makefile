CC= c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

HEADER= PhoneBook.hpp Contact.hpp

SRCS= main.cpp PhoneBook.cpp Contact.cpp

OBJS= ${SRCS:.cpp=.o}

NAME= phonebook

${NAME}: ${OBJS} ${HEADER}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
