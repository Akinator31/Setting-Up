/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** check_square_condition
*/

#include "../../include/setting_up.h"

int check_square_condition(char **map, int row, int col)
{
    square_size_t size = arr_2d_len(map);

    if ((row > (size.row - 1)) || (col > size.col))
        return 0;
    if (map[row][col] == 'o') {
        return 0;
    }
    return 1;
}

int is_square_of_size(char **map, int row, int col, int square_size)
{
    int check_square = 1;

    for (int i = 0; (i < square_size) && (check_square == 1); i++) {
        for (int e = 0; (e < square_size) && (check_square == 1); e++) {
            check_square = check_square_condition(map, row + i, col + e);
        }
    }
    return check_square;
}