/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** find_biggest_square
*/

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include "../../include/setting_up.h"
#include "../../include/my.h"

int find_biggest_square(char **map, int row, int col)
{
    int square_size = 1;

    while (is_square_of_size(map, row, col, square_size) == 1) {
        square_size += 1;
    }
    return square_size - 1;
}

int loop_condition(char **map, int **loop_params, square_size_t *size)
{
    int square_size = find_biggest_square(map,
        *loop_params[2], *loop_params[3]);

    if (square_size > *loop_params[4]) {
        *loop_params[4] = square_size;
        size->row = *loop_params[2];
        size->col = *loop_params[3];
        return square_size;
    }
    return *loop_params[4];
}

int compute_map(char *filepath)
{
    int i = 0;
    int e = 0;
    char *buffer = load_file_in_mem(filepath);
    int nb_rows = my_getnbr(buffer);
    int nb_cols = get_first_line_length(buffer);
    char **map = load_2d_arr_from_file(filepath, nb_rows, nb_cols);
    int square_size = 1;
    square_size_t biggest_square = {0, 0};
    int *loop_params[] = {&nb_rows, &nb_cols, &i, &e, &square_size};

    for (i = 0; i < nb_rows; i++) {
        for (e = 0; e < nb_cols; e++) {
            square_size = loop_condition(map, loop_params, &biggest_square);
        }
    }
    draw_square(map, biggest_square.col, biggest_square.row, square_size);
    display_2d_array(map, nb_rows, nb_cols);
    free(buffer);
    free_2d_array_of_char(map, nb_rows);
}
