/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** map_file_first_line_error
*/

#include <unistd.h>
#include "../../include/setting_up.h"

int map_file_first_line_error(void)
{
    write(2, "First line format not correct\n", 31);
    return 84;
}