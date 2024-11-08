/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** arr_2d_len
*/

#include <stdlib.h>
#include "../../include/setting_up.h"

square_size_t arr_2d_len(char **map)
{
    square_size_t size = {
        0,
        0
    };

    for (int i = 0; map[i] != NULL; i++) {
        size.row += 1;
    }
    for (int i = 0; map[0][i] != '\n'; i++) {
        size.col += 1;
    }
    return size;
}