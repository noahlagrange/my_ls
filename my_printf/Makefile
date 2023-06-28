##
## EPITECH PROJECT, 2022
## oui
## File description:
## make file
##

NAME = libmy.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -W

SRC = my_getnbr.c \
      my_printf.c \
      my_put_binary.c \
      my_putchar.c \
      my_put_decimal.c \
      my_put_hex.c \
      my_put_nbr.c \
      my_put_octal.c \
      my_put_pointeraddress.c \
      my_put_unprint_s.c \
      my_putstr.c \
      my_revstr.c \
      my_strlen.c \
      my_put_nothing.c	\
      is_modulo.c	\
      my_put_s_esp.c	\
      parsing.c	\
      my_put_float.c	\
      my_strcpy.c	\
      my.h	\


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	find -type f -name "#*#" -delete -o \
	-type f -name "*~" -delete -o -type f -name "*.o" -delete -o \
	-type f -name "*.gc*" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all
