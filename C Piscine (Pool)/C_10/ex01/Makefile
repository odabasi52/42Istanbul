COMP = gcc -Wall -Wextra -Werror

SRCS = srcs/functions.c srcs/main.c srcs/no_args_mode.c
OBJS = functions.o main.o no_args_mode.o
NAME = ft_cat

RM = rm -f

${NAME}: 
	${COMP} -c ${SRCS}
	${COMP} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

.PHONY: all clean fclean