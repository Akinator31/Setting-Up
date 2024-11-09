/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** map_forbidden_char
*/

#include <unistd.h>
#include "../../include/setting_up.h"

int map_forbidden_char(void)
{
    write(2, "The map doesn't just contain 'o' and '.'\n", 42);
    return 84;
}
