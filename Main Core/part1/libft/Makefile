CC = gcc
CFLAGS = -Wall -Wextra -Werror
REMOVE = rm -rf
CREATE_LIB = ar rc
INDEX_LIB = ranlib

SRC_FILES = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_strncmp.c ft_tolower.c ft_toupper.c ft_memcmp.c ft_bzero.c ft_putstr_fd.c ft_putnbr_fd.c \
ft_putendl_fd.c ft_striteri.c ft_putchar_fd.c ft_calloc.c ft_memcpy.c ft_memset.c ft_memchr.c \
ft_memmove.c ft_itoa.c ft_strchr.c ft_substr.c ft_strdup.c ft_strnstr.c ft_strrchr.c ft_strjoin.c \
ft_strtrim.c ft_strmapi.c ft_split.c ft_strlcat.c ft_strlcpy.c ft_strlen.c
BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUS_OBJS = ${BONUS_FILES:.c=.o}
OBJ_FILES = ${SRC_FILES:.c=.o}
NAME = libft.a

all: ${NAME}

${NAME}: ${OBJ_FILES}
	${CREATE_LIB} ${NAME} ${OBJ_FILES}
	${INDEX_LIB} ${NAME}

bonus: ${BONUS_OBJS}
	${CREATE_LIB} ${NAME} ${BONUS_OBJS}
	${INDEX_LIB} ${NAME}

clean:
	${REMOVE} ${OBJ_FILES}

fclean: clean
	${REMOVE} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus