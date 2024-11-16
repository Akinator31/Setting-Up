/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** map_generation
*/

#include <unistd.h>
#include <stdlib.h>
#include "../../include/setting_up.h"
#include "../../include/my.h"

static int check_args(int ac, char **av)
{
    if (ac < 3)
        return 0;
    for (int i = 0; av[2][i] != '\0'; i++) {
        if ((av[2][i] != '.') && (av[2][i] != 'o'))
            return 0;
    }
    return 1;
}

static void add_return_line(char *buffer, int size,
    int *backslash_nb, int *index)
{
    if (*backslash_nb == size) {
        buffer[*index] = '\n';
        *backslash_nb = 0;
        *index += 1;
    }
}

static int generate_pattern(char *buffer, int buffer_len, char **av, int size)
{
    int i = 0;
    int backslashn = 0;

    for (int a = 0; a < my_strlen(av[1]); a++) {
        buffer[i] = av[1][a];
        i++;
    }
    buffer[i] = '\n';
    for (i += 1; i < (buffer_len - 1); i++) {
        for (int e = 0; (buffer[i] != '\0') && (e < (my_strlen(av[2]))); e++) {
            add_return_line(buffer, size, &backslashn, &i);
            buffer[i] = av[2][e];
            backslashn++;
            i++;
        }
        i--;
    }
    buffer[i - 1] = '\0';
}

int map_generation(int ac, char **av)
{
    char *buffer = NULL;
    int buffer_len = my_strlen(av[1]) + my_getnbr(av[1]) *
        my_getnbr(av[1]) + my_getnbr(av[1]) + 3;

    if (!check_args(ac, av))
        return 0;
    buffer = malloc(sizeof(char) * (my_strlen(av[1]) + my_getnbr(av[1])
        * my_getnbr(av[1]) + my_getnbr(av[1]) + 4));
    fill_str(buffer, buffer_len);
    generate_pattern(buffer, buffer_len, av, my_getnbr(av[1]));
    compute_map_gen(buffer);
    return 1;
}
