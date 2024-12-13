NAME = replace

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCS = main.cpp

OBJS = ${SOURCS:.cpp=.o}

%.o : %.cpp
	c++ ${FLAGS} -c $< -o $@

all : ${NAME}

${NAME} : ${OBJS}
	c++ ${FLAGS} ${OBJS} -o $@

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all fclean clean re
