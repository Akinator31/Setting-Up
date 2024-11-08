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

void free_2d_array_of_char(char **arr, int nb_rows);
char *load_file_in_mem(char const *filepath);
char **load_2d_arr_from_file(char const *filepath,
    int nb_rows, int nb_cols);
square_size_t arr_2d_len(char **map);
int check_square_condition(char **map, int row, int col);
int is_square_of_size(char **map, int row, int col, int square_size);
int find_biggest_square(char **map, int row, int col);

#endif