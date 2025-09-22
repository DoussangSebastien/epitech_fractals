##
## EPITECH PROJECT, 2024
## Project
## File description:
## Makefile
##

.PHONY: all clean fclean re

SRC =	src/main.c \
		src/fractal.c \
		src/my_putstr_error.c \
		src/my_strlen.c \
		src/my_strdup.c \
		src/expand_fractal.c

OBJ = $(SRC:.c=.o)

NAME = fractals

CFLAGS = -I./include

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(LIBS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
