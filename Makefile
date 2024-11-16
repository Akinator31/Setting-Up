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
		src/square_checks/draw_square.c \
		src/args_verification/first_arg_check.c \
		src/map_generation/map_generation.c \
		src/map_verification/map_verification.c \
		src/map_verification/check_number_of_lines.c \
		src/map_verification/check_first_line_map.c \
		src/map_verification/check_map_content.c \
		src/map_verification/check_correct_number_of_line_map.c \
		src/map_verification/check_lines_length.c \
		src/utils/free_2d_array_of_char.c \
		src/utils/arr_2d_len.c \
		src/utils/display_2d_array.c \
		src/utils/is_a_number.c \
		src/utils/is_full_number_char.c \
		src/errors/map_file_failed_opening.c \
		src/errors/map_file_empty.c \
		src/errors/map_file_first_line_error.c \
		src/errors/no_arguments.c \
		src/errors/map_forbidden_char.c \
		src/errors/map_incorrect_line_number.c \
		src/errors/map_incorrect_lines_length.c \

OBJ = $(SRC:.c=.o)

NAME = setting_up

LIBDIR = 	lib/my_lib/libmy.a \
			lib/my_printf/libmy_printf.a

CLEANDIR = 	*.o \
			src/file_loading/*.o \
			src/square_checks/*.o \
			src/utils/*.o \
			src/map_generation/*.o \
			src/map_verification/*.o \
			src/args_verification/*.o \
			src/errors/*.o \

all: $(NAME)

$(NAME): $(OBJ)
		make -C lib/my_lib
		make -C lib/my_printf
		gcc -o $(NAME) $(OBJ) $(LIBDIR)

clean:
		make clean -C lib/my_lib
		make clean -C lib/my_printf
		rm -f $(CLEANDIR)

fclean: clean

re: fclean all
