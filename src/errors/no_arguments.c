/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** no_arguments
*/

#include <unistd.h>
#include "../../include/setting_up.h"

int no_arguments_error(void)
{
    write(2, "No arguments given as parameter\n", 33);
    return 84;
}
