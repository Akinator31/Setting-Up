/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** setting_up
*/

#include <unistd.h>
#include "include/setting_up.h"

int main(int ac, char **av)
{
    if (ac == 1) {
        write(2, "No arguments given as parameter\n", 33);
        return 84;
    }
    if (!first_arg_is_a_number(av[1])) {
        if (map_verification(av[1]) == 0)
            return map_file_failed_opening();
        if (map_verification(av[1]) == 1)
            return map_file_empty();
        if (map_verification(av[1]) == 2)
            return map_file_first_line_error();
    }
}
