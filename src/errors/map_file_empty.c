/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** map_file_empty
*/

#include <unistd.h>
#include "../../include/setting_up.h"

int map_file_empty()
{
    write(2, "Map file empty\n", 16);
    return 84;
}
