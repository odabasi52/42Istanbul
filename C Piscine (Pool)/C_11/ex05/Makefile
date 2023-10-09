COMP = gcc -Wall -Wextra -Werror

SRCS = srcs/do-op.c srcs/funcs.c srcs/ops.c
OBJS = do-op.o funcs.o ops.o
NAME = do-op

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