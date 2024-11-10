/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** display_2d_array
*/

#include "../../include/setting_up.h"
#include "../../include/my.h"

void display_2d_array(char **map, int nb_rows, int nb_cols)
{
    square_size_t size = arr_2d_len(map);

    for (int i = 0; i < nb_rows; i++) {
        for (int e = 0; e <= nb_cols; e++) {
            my_putchar(map[i][e]);
        }
    }
}
