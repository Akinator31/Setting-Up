/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** arr_2d_len
*/

#include <stdlib.h>
#include "../../include/setting_up.h"
#include "../../include/my.h"

square_size_t arr_2d_len(char **map)
{
    int col = my_strlen(map[0]) - 1;
    square_size_t size = {
        0,
        col
    };

    for (int i = 0; map[i] != NULL; i++) {
        size.row += 1;
    }
    return size;
}
