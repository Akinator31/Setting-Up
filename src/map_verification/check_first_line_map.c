/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** check_first_line_map
*/

#include "../../include/setting_up.h"
#include "../../include/my.h"

int check_first_line_map(char *buffer)
{
    if (!is_full_number_check(buffer))
        return 0;
    if ((buffer[0] == '0')) {
        return 0;
    }
    for (int i = 0; i <= my_strlen(buffer) - 2; i++) {
        printf("%c\n", buffer[i]);
        if (!is_a_number(buffer[i])) {
            return 0;
        }
    }
    return 1;
}