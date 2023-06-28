/*
** EPITECH PROJECT, 2022
** EMPTY
** File description:
** EMPTY
*/

#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdio.h>

int my_printf(const char *format, ...);

int is_empty(struct dirent *file)
{
    if (file == NULL)
        return 1;
    return 0;
}

void space_2(struct dirent *file, int c)
{
    if (c != 0) {
        if ( file != NULL)
            my_printf("  ", file->d_name);
    }
}
