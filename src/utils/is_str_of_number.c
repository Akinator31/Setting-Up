/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin [WSL : Ubuntu]
** File description:
** is_str_of_number
*/

#include "../../include/setting_up.h"

int is_str_of_number(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0') || (str[i] > '9'))
            return 0;
    }
    return 1;
}
