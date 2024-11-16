/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** setting_up
*/

#ifndef INCLUDED_SETTING_UP_H
    #define INCLUDED_SETTING_UP_H

typedef struct square_size {
    int row;
    int col;
} square_size_t;

typedef struct errors_s {
    int err_code;
    int (*f)(void);
} errors_t;

typedef struct error_report {
    int err_code;
} error_report_t;

int my_printf(const char *restrict format, ...);
void free_2d_array_of_char(char **arr, int nb_rows);
char *load_file_in_mem(char *filepath, int is_path);
char **load_2d_arr_from_file(char *filepath,
    int nb_rows, int nb_cols);
char **load_2d_arr_from_map(char *map, int nb_rows,
    int nb_cols);
square_size_t arr_2d_len(char **map);
int check_square_condition(char **map, int row, int col, square_size_t size);
int is_square_of_size(char **map, int row, int col, int square_size);
int find_biggest_square(char **map, int row, int col);
void display_2d_array(char **map, int nb_rows, int nb_cols);
int is_a_number(char actual_char);
int first_arg_is_a_number(char *first_arg);
int map_generation(int ac, char **av);
int map_verification(char *filepath);
int check_number_of_lines(char *filepath);
int check_first_line_map(char *buffer);
int is_full_number_check(char *buffer);
int check_map_content(char *filepath);
int check_correct_number_of_line_map(char *filepath);
int check_lines_length(char *filepath);
int get_first_line_length(char *buffer);
int compute_map(char *filepath);
int compute_map_gen(char *map_buffer);
void draw_square(char **map, int pos_x, int pos_y, int square_size);
int is_str_of_number(char *str);
void fill_str(char *str, int buffer_len);

int map_file_failed_opening(void);
int map_file_empty(void);
int map_file_first_line_error(void);
int no_arguments_error(void);
int map_forbidden_char(void);
int map_incorrect_line_number(void);
int map_incorrect_lines_length(void);
int too_much_arguments_error(void);
int incorrect_args_for_map_gen(void);

#endif
