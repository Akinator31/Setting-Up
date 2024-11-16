/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** setting_up
*/

#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "include/setting_up.h"

int file_test(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct stat file_info;
    char *buffer = NULL;
    int open_result = 0;

    if (fd == -1) {
        close(fd);
        return 84;
    }
    stat(filepath, &file_info);
    buffer = malloc(file_info.st_size + 1);
    open_result = read(fd, buffer, file_info.st_size);
    if (open_result == -1)
        return 84;
    close(fd);
    free(buffer);
    return 0;
}

int main(int ac, char **av)
{
    if (ac == 1) {
        return no_arguments_error();
    }
    if (ac > 3) {
        return too_much_arguments_error();
    }
    if (!is_str_of_number(av[1])) {
        if (file_test(av[1]) == 84)
            return map_file_failed_opening();
        if (map_verification(av[1]) == 84)
            return 84;
        return compute_map(av[1]);
    }
    if (!map_generation(ac, av))
        return incorrect_args_for_map_gen();
}
