/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** free_2d_array_of_char
*/

#include <stdlib.h>
#include "../../include/setting_up.h"

void free_2d_array_of_char(char **arr, int nb_rows)
{
    for (int i = 0; i < nb_rows; i++) {
        free(arr[i]);
    }
    free(arr);
}