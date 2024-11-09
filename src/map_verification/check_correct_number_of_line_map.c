/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** check_correct_number_of_line_map
*/

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include "../../include/setting_up.h"
#include "../../include/my.h"

int check_lines(char *buffer)
{
    int i = 0;
    int nb_lines = my_getnbr(buffer);
    int result = 0;

    for (i; buffer[i] != '\n'; i++) {
        if (buffer[i] == '\0')
            return 3;
    }
    i += 1;
    for (i; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n') {
            result++;
        }
    }
    if (nb_lines != result)
        return 3;
    return 10;
}

int check_correct_number_of_line_map(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int result = 0;
    struct stat info_file;
    char *buffer = NULL;

    stat(filepath, &info_file);
    buffer = malloc(sizeof(char) * info_file.st_size + 1);
    buffer[info_file.st_size] = '\0';
    read(fd, buffer, info_file.st_size);
    result = check_lines(buffer);
    free(buffer);
    close(fd);
    return result;
}
