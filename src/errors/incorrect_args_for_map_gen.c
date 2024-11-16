/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin [WSL : Ubuntu]
** File description:
** incorrect_args_for_map_gen
*/

#include <unistd.h>
#include "../../include/setting_up.h"

int incorrect_args_for_map_gen(void)
{
    write(2, "Incorrect pattern for map generation\n", 38);
    return 84;
}
