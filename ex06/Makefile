NAME = harl

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURC = main.cpp Harl.cpp

OBJS = ${SOURC:.cpp=.o}

%.o : %.cpp
	c++ ${FLAGS} -c $< -o $@

all : ${NAME}

${NAME} : ${OBJS}
	c++ ${FLAGS} ${OBJS} -o $@

clean :
	rm -rf ${OBJS}

flean : clean
	rm -rf ${NAME}

re : fclean all

.PHOMY : all clean re fclean
