/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** map_incorrect_lines_length
*/

#include <unistd.h>
#include "../../include/setting_up.h"

int map_incorrect_lines_length(void)
{
    write(2, "Incorrect line lengths\n", 24);
    return 84;
}
