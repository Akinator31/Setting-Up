/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** find_biggest_square
*/

#include "../../include/setting_up.h"

int find_biggest_square(char **map, int row, int col)
{
    int square_size = 1;

    while (is_square_of_size(map, row, col, square_size) == 1) {
        square_size += 1;
    }
    return square_size - 1;
}