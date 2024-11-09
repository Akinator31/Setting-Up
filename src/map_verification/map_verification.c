/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** map_verification
*/

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include "../../include/setting_up.h"

int map_verification(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int read_result = 0;
    struct stat info_file;
    char *buffer = NULL;

    stat(filepath, &info_file);
    buffer = malloc(sizeof(char) * info_file.st_size + 1);
    buffer[info_file.st_size] = '\0';
    if (fd == -1)
        return 0;
    if (info_file.st_size == 0)
        return 1;
    read_result = read(fd, buffer, info_file.st_size);
    if (!check_first_line_map(buffer)) {
        free(buffer);
        return 2;
    }
    free(buffer);
    close(fd);
    return 10;
}
