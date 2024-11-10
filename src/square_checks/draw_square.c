/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin [WSL : Ubuntu]
** File description:
** draw_square
*/

#include "../../include/setting_up.h"

void draw_square(char **map, int pos_x, int pos_y, int square_size)
{
    square_size_t size = arr_2d_len(map);

    for (int i = 0; i < square_size; i++) {
        for (int a = 0; a < square_size; a++) {
            map[pos_y + i][pos_x + a] = 'x';
        }
    }
}
