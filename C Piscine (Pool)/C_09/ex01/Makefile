COMPILER = gcc
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -f
CREATE_LIB = ar rc
INDEX_LIB = ranlib

SRC_FILES =  srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJ_FILES = ${SRC_FILES:.c=.o}
LIBRARY = libft.a
INCLUDES = includes

.c.o:
	${COMPILER} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDES}

${LIBRARY}: ${OBJ_FILES}
	${CREATE_LIB} ${LIBRARY} ${OBJ_FILES}
	${INDEX_LIB} ${LIBRARY}

all: ${LIBRARY}

clean:
	${REMOVE} ${OBJ_FILES}

fclean: clean
	${REMOVE} ${LIBRARY}

re: fclean all

.PHONY: all clean fclean re