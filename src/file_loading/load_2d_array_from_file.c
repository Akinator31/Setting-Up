/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** load_2d_array_from_file
*/

#include <stdlib.h>
#include "../../include/setting_up.h"

int skip_to_first_line(char *buffer)
{
    int result = 0;

    for (int i = 0; buffer[i] != '\n'; i++) {
        result += 1;
    }
    return result;
}

char **load_2d_arr_from_file(char *filepath, int nb_rows, int nb_cols)
{
    char **buffer = (char **)malloc(sizeof(char *) * (nb_rows + 1));
    char *file_buffer = load_file_in_mem(filepath, 1);
    int size = skip_to_first_line(file_buffer) + 1;
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

char **load_2d_arr_from_map(char *map, int nb_rows, int nb_cols)
{
    char **buffer = (char **)malloc(sizeof(char *) * (nb_rows + 1));
    int size = skip_to_first_line(map) + 1;
    int open_result = 0;

    for (int i = 0; i < nb_rows; i++)
        buffer[i] = (char *)malloc(sizeof(char) * (nb_cols + 2));
    for (int i = 0; i <= nb_rows - 1; i++) {
        for (int e = 0; e <= nb_cols; e++) {
            buffer[i][e] = map[size];
            size++;
        }
        buffer[i][nb_cols + 1] = '\0';
    }
    buffer[nb_rows] = NULL;
    return buffer;
}
