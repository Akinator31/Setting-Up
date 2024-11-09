/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** display_2d_array
*/

#include "../../include/setting_up.h"
#include "../../include/my.h"

void display_2d_array(char **map)
{
    square_size_t size = arr_2d_len(map);

    for (int i = 0; i < size.row; i++) {
        for (int e = 0; e <= size.col + 1; e++) {
            my_putchar(map[i][e]);
        }
    }
}
