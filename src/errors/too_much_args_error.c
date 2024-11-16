/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin [WSL : Ubuntu]
** File description:
** too_much_args_error
*/

#include <unistd.h>
#include "../../include/setting_up.h"

int too_much_arguments_error(void)
{
    write(2, "Too much arguments\n", 20);
    return 84;
}
