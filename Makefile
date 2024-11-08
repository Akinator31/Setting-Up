##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile for setting_up project
##

SRC	=	setting_up.c \
		src/file_loading/load_file_in_mem.c \
		src/file_loading/load_2d_array_from_file.c \
		src/square_checks/is_square_of_size.c \
		src/square_checks/find_biggest_square.c \
		src/utils/free_2d_array_of_char.c \
		src/utils/arr_2d_len.c

OBJ = $(SRC:.c=.o)

NAME = setting_up

LIBDIR = lib/libmy.a

all: $(NAME)

$(NAME): $(OBJ)
		make -C lib
		gcc -o $(NAME) $(OBJ) $(LIBDIR)

clean:
		make clean -C lib
		rm -f *.o
		rm -f src/file_loading/*.o
		rm -f src/square_checks/*.o
		rm -f src/utils/*.o

fclean: clean

re: fclean all