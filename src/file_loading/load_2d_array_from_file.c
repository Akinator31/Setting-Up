/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** load_2d_array_from_file
*/

#include <stdlib.h>
#include "../../include/setting_up.h"

char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols)
{
    char **buffer = (char **)malloc(sizeof(char *) * (nb_rows + 1));
    int size = 0;
    char *file_buffer = load_file_in_mem(filepath);
    int open_result = 0;

    for (int i = 0; i < nb_rows; i++)
        buffer[i] = (char *)malloc(sizeof(char) * (nb_cols + 2));
    for (int i = 0; i <= nb_rows - 1; i++) {
        for (int e = 0; e <= nb_cols; e++) {
            buffer[i][e] = file_buffer[size];
            size++;
        }
        buffer[i][nb_cols + 1] = '\0';
    }
    buffer[nb_rows] = NULL;
    free(file_buffer);
    return buffer;
}
