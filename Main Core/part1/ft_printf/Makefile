NAME = libftprintf.a
CC = gcc
CFLAGS =  -Wall -Wextra -Werror
SRC_FILES = ft_printf.c ft_extras.c
OBJ_FILES = ${SRC_FILES:.c=.o}

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rc $(NAME) $(OBJ_FILES)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re