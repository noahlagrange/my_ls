/*
** EPITECH PROJECT, 2022
** open_dir
** File description:
** dir
*/

#include <stddef.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *open_dir(char **arr)
{
    int i = 1;
    char *file = "./";

    while (arr[i] != NULL) {
        if (arr[i][0] != '-' ) {
            return arr[i];
        }
        i += 1;
    }
    return file;
}

char *open_flag(char **arr)
{
    int i = 1;
    char *file = "./";

    while (arr[i] != NULL) {
        if (arr[i][0] == '-' ) {
            return arr[i];
        }
        i += 1;
    }
    return file;
}
