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

static int one_line_case(char **map, square_size_t *biggest_square)
{
    for (int i = 0; map[0][i] != '\n'; i++) {
        if (map[0][i] == '.') {
            biggest_square->row = 0;
            biggest_square->col = i;
            return 1;
        }
    }
    return 1;
}

static int one_collumn_case(char **map, square_size_t *biggest_square)
{
    for (int i = 0; i < arr_2d_len(map).row; i++) {
        if (map[i][0] == '.') {
            biggest_square->row = i;
            biggest_square->col = 0;
            return 1;
        }
    }
    return 1;
}

int loop_condition(char **map, int **loop_params,
    square_size_t *biggest_square, square_size_t size)
{
    int square_size = 0;

    if (size.row == 1)
        return one_line_case(map, biggest_square);
    if (size.col == 1)
        return one_collumn_case(map, biggest_square);
    if ((square_size > (size.col - *loop_params[1])) ||
        (square_size > (size.row - *loop_params[0])))
        return square_size;
    square_size = find_biggest_square(map,
        *loop_params[0], *loop_params[1]);
    if (square_size > *loop_params[2]) {
        *loop_params[2] = square_size;
        biggest_square->row = *loop_params[0];
        biggest_square->col = *loop_params[1];
        return square_size;
    }
    return *loop_params[2];
}

int compute_map(char *filepath)
{
    int i = 0;
    int e = 0;
    char *buffer = load_file_in_mem(filepath, 1);
    square_size_t size = {my_getnbr(buffer), get_first_line_length(buffer)};
    char **map = load_2d_arr_from_file(filepath, size.row, size.col);
    int square_size = 1;
    square_size_t biggest_square = {0, 0};
    int *loop_params[] = {&i, &e, &square_size};

    for (i = 0; i < size.row; i++) {
        for (e = 0; e < size.col; e++) {
            square_size = loop_condition(map, loop_params,
                &biggest_square, size);
        }
    }
    draw_square(map, biggest_square.col, biggest_square.row, square_size);
    display_2d_array(map, size.row, size.col);
    free(buffer);
    free_2d_array_of_char(map, size.row);
    return 0;
}

int compute_map_gen(char *map_buffer)
{
    int i = 0;
    int e = 0;
    square_size_t size = {my_getnbr(map_buffer),
        get_first_line_length(map_buffer)};
    char **map = load_2d_arr_from_map(map_buffer, size.row, size.col);
    int square_size = 1;
    square_size_t biggest_square = {0, 0};
    int *loop_params[] = {&i, &e, &square_size};

    for (i = 0; i < size.row; i++) {
        for (e = 0; e < size.col; e++) {
            square_size = loop_condition(map, loop_params,
                &biggest_square, size);
        }
    }
    draw_square(map, biggest_square.col, biggest_square.row, square_size);
    display_2d_array(map, size.row, size.col);
    free(map_buffer);
    free_2d_array_of_char(map, size.row);
}
