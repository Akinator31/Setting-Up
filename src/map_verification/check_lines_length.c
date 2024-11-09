/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** check_lines_length
*/

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include "../../include/setting_up.h"
#include "../../include/my.h"

int get_first_line_length(char *buffer)
{
    int i = 0;
    int result = 0;

    for (i; buffer[i] != '\n'; i++) {
        if (buffer[i] == '\0')
            return 84;
    }
    i += 1;
    for (i; buffer[i] != '\n'; i++)
        result++;
    return result;
}

int check_return_to_line(char *buffer, int length_found,
    int first_length, int index)
{
    if (buffer[index] == '\n') {
        if (length_found != first_length)
            return 0;
        if (length_found == first_length)
            return 2;
    }
    return 1;
}

int check_length_line_by_line(char *buffer)
{
    int i = 0;
    int nb_lines = my_getnbr(buffer);
    int first_line_length = get_first_line_length(buffer);
    int length = 0;

    for (i; buffer[i] != '\n'; i++) {
        if (first_line_length == 84)
            return 5;
    }
    i += 1;
    for (i; buffer[i] != '\0'; i++) {
        length++;
        if (!check_return_to_line(buffer, length - 1, first_line_length, i))
            return 5;
        if (check_return_to_line(buffer, length - 1,
            first_line_length, i) == 2)
            length = 0;
    }
    return 10;
}

int check_lines_length(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int result = 0;
    struct stat info_file;
    char *buffer = NULL;

    stat(filepath, &info_file);
    buffer = malloc(sizeof(char) * info_file.st_size + 1);
    buffer[info_file.st_size] = '\0';
    read(fd, buffer, info_file.st_size);
    result = check_length_line_by_line(buffer);
    free(buffer);
    close(fd);
    return result;
}
