/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** map_file_failed_opening
*/

#include <unistd.h>
#include "../../include/setting_up.h"

int map_file_failed_opening(void)
{
    write(2, "Error openning or reading file\n", 31);
    return 84;
}
