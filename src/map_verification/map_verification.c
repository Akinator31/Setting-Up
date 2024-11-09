/*
** EPITECH PROJECT, 2024
** B-CPE-110-TLS-1-1-settingup-pavel.de-wavrechin
** File description:
** map_verification
*/

#include <stdlib.h>
#include <fcntl.h>
#include "../../include/setting_up.h"

int map_verification(char *filepath)
{
    int report_code = 0;

    if (check_number_of_lines(filepath) == 1)
        return map_file_empty();
    if (check_number_of_lines(filepath) == 2)
        return map_file_first_line_error();
    if (check_correct_number_of_line_map(filepath) == 3)
        return map_incorrect_line_number();
    if (check_map_content(filepath) == 4)
        return map_forbidden_char();
    if (check_lines_length(filepath) == 5)
        return map_incorrect_lines_length();
}
