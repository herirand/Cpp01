NAME = zombie

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

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

.PHONY : all re clean fclean
