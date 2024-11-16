/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin [WSL : Ubuntu]
** File description:
** fill_str
*/

#include "../../include/setting_up.h"

void fill_str(char *str, int buffer_len)
{
    for (int i = 0; i <= buffer_len; i++)
        str[i] = 'e';
    str[buffer_len - 1] = '\0';
}
