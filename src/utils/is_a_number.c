/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** is_a_number
*/

#include "../../include/setting_up.h"

int is_a_number(char actual_char)
{
    if ((actual_char >= '0') && (actual_char <= '9'))
        return 1;
    return 0;
}
