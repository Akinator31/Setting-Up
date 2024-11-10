/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** setting_up
*/

#include <unistd.h>
#include <fcntl.h>
#include "include/setting_up.h"

int file_test(char *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        close(fd);
        return 84;
    }
    close(fd);
    return 0;
}

int main(int ac, char **av)
{
    if (ac == 1) {
        return no_arguments_error();
    }
    if (!first_arg_is_a_number(av[1])) {
        if (file_test(av[1]) == 84)
            return map_file_failed_opening();
        if (map_verification(av[1]) == 84)
            return 84;
        compute_map(av[1]);
    }
}
