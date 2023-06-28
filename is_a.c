/*
** EPITECH PROJECT, 2022
** -A
** File description:
** FLAGS
*/
#include <dirent.h>
#include <sys/stat.h>
#include <stdio.h>

int my_printf(const char *format, ...);

void space_2(struct dirent *file, int c);

int is_a(DIR *dir)
{
    struct dirent *file = NULL;

    file = readdir(dir);
    while (file != NULL) {
        my_printf("%s\n", file->d_name);
        file = readdir(dir);
    }
    return 0;
}
