/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** check_square_condition
*/

#include "../../include/setting_up.h"

int check_square_condition(char **map, int row, int col, square_size_t size)
{
    if ((row >= size.row) || (col >= size.col) || map[row][col] == 'o')
        return 0;
    return 1;
}

int is_square_of_size(char **map, int row, int col, int square_size)
{
    int check_square = 1;
    square_size_t size = arr_2d_len(map);

    for (int i = 0; i < square_size; i++) {
        if (!(check_square_condition(map, row + square_size - 1,
            col + i, size)))
            return 0;
    }
    for (int i = 0; i < square_size; i++) {
        if (!(check_square_condition(map, row + i,
            col + square_size - 1, size)))
            return 0;
    }
    return 1;
}
