NAME = weapon

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS = ${SOURC:.cpp=.o}

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
