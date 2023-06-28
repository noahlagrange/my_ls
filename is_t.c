/*
** EPITECH PROJECT, 2022
** IS_T
** File description:
** -T
*/

#include <dirent.h>
#include <sys/stat.h>
#include <stdio.h>

int my_strlen(char const *str);

char *my_revstr(char *str);

int my_printf(const char *format, ...);

int is_t(DIR *dir)
{
    struct dirent *file = NULL;
    struct stat meta;

    file = readdir(dir);
    while (file != NULL) {
        stat(file->d_name, &meta);
        if (file->d_name[0] != '.') {
            my_printf("%s  %s\n", file->d_name, meta.st_size);
        }
        file = readdir(dir);
    }
    return 0;
}
