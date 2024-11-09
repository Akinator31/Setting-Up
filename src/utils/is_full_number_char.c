/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** is_full_number_char
*/

#include "../../include/setting_up.h"

int is_full_number_check(char *buffer)
{
    for (int i = 0; buffer[i] != '\n'; i++) {
        if (!is_a_number(buffer[i]))
            return 0;
    }
    return 1;
}
