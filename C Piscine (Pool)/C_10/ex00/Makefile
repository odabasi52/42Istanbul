COMP = gcc -Wall -Wextra -Werror

SRC = srcs/ft_display.c
OBJ = ${SRC:.c=.o}
NAME = ft_display_file

RM = rm -f

.c.o:
	${COMP} -c ${SRC} -o ${OBJ}

${NAME}: ${OBJ}
	${COMP} ${OBJ} -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJ}

fclean:	clean
	${RM} ${NAME}

.PHONY: all clean fclean