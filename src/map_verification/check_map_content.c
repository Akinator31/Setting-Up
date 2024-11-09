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

int check_map_char(char *buffer)
{
    int i = 0;

    for (i; buffer[i] != '\n'; i++) {
        if (buffer[i] == '\0')
            return 4;
    }
    i += 1;
    for (i; buffer[i] != '\0'; i++) {
        if ((buffer[i] != 'o') && (buffer[i] != '.') && (buffer[i] != '\n')) {
            return 4;
        }
    }
    return 10;
}

int check_map_content(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int read_result = 0;
    struct stat info_file;
    char *buffer = NULL;

    stat(filepath, &info_file);
    buffer = malloc(sizeof(char) * info_file.st_size + 1);
    buffer[info_file.st_size] = '\0';
    read_result = read(fd, buffer, info_file.st_size);
    read_result = check_map_char(buffer);
    free(buffer);
    close(fd);
    return read_result;
}
