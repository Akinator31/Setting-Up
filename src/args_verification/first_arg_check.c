/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** first_arg_check
*/

#include "../../include/setting_up.h"

int first_arg_is_a_number(char *first_arg)
{
    if (is_a_number(first_arg[0])) {
        return 1;
    }
    return 0;
}
