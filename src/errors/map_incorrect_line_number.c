/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** map_incorrect_line_number
*/

#include <unistd.h>
#include "../../include/setting_up.h"

int map_incorrect_line_number(void)
{
    write(2, "The number of lines in the file is incorrect\n", 46);
    return 84;
}
