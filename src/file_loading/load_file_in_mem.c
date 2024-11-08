/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** load_file_in_mem
*/

#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "../../include/setting_up.h"

char *load_file_in_mem(char const *filepath)
{
    char *buffer = NULL;
    int fd = 0;
    int open_result = 0;
    struct stat file_info;

    stat(filepath, &file_info);
    buffer = malloc(file_info.st_size + 1);
    fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        write(1, "Error opening file\n", 20);
        return NULL;
    }
    open_result = read(fd, buffer, file_info.st_size);
    if (open_result == -1) {
        write(1, "Error reading file\n", 20);
        return NULL;
    }
    buffer[file_info.st_size] = '\0';
    return buffer;
}