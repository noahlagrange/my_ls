##
## EPITECH PROJECT, 2022
## make
## File description:
## bs_ls
##

NAME = my_ls

CFLAGS = -Wall -Werror -Wextra -W -L./my_printf -lmy -g

SRC =	my_ls.c	\
	my_strcmp.c \
	sort_struct.c	\
	is_a.c	\
	is_l.c	\
	put_mode.c	\
	open_dir.c	\
	is_t.c	\
	put_info.c	\
	is_empty.c	\
	my_strcat.c

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./my_printf
	gcc -o $(NAME) $(SRC) $(CFLAGS)

clean:
	find -type f -name "#*#" -delete -o \
	-type f -name "*~" -delete -o -type f -name "*.o" -delete -o \
	-type f -name "*.gc*" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all
