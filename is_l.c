/*
** EPITECH PROJECT, 2022
** -L_FLAGS
** File description:
** FLAG
*/

#include <dirent.h>
#include <sys/stat.h>
#include <stdio.h>
#include <sys/types.h>
#include <pwd.h>
#include <time.h>
#include <stdlib.h>

char *my_strcat(char *dest, char const *src);
char *open_dir(char **arr);
int my_strlen(char const *str);
char *my_revstr(char *str);
int my_printf(const char *format, ...);
void mode_type(unsigned int nb);
char *user_name(struct stat meta);
char *group_name(struct stat meta);
char *print_time(char *c);

char *path(char *name, char *av)
{
    int N = my_strlen(name);
    int A = my_strlen(av);
    int i = 0;
    char *path = malloc(sizeof(char) *(N + A) + 2);
    while (av[i] != '\0') {
        path[i] = av[i];
        i += 1;
    }
    if (path[i - 1] != '/')
        path[i] = '/';
    path[i + 1] = '\0';
    path = my_strcat(path, name);
    return path;
}

void size_block(DIR *dir, char *av)
{
    struct dirent *file = NULL;
    struct stat meta;
    int stock = 0;
    char *pat;
    file = readdir(dir);
    while (file != NULL) {
        pat = path(file->d_name, av);
        stat(pat, &meta);
        if (pat != NULL) {
            free(pat);
            pat = NULL;
        }
        if (file->d_name[0] != '.')
            stock += meta.st_blocks / 2;
        file = readdir(dir);
    }
    my_printf("total %d\n", stock);
    closedir(dir);
}

void print_info_l(struct dirent *file, struct stat meta)
{
    if (file->d_name[0] != '.') {
        mode_type(meta.st_mode);
        my_printf(". %d %s", meta.st_nlink, user_name(meta));
        my_printf(" %s %d ", group_name(meta), meta.st_size);
        my_printf("%s ", print_time(ctime(&meta.st_mtime)));
        my_printf("%s\n", file->d_name);
    }
}

int is_l(DIR *dir, char **av)
{
    struct dirent *file = NULL;
    struct stat meta = {0};
    size_block(dir, open_dir(av));
    dir = opendir(open_dir(av));
    char *pat;
    file = readdir(dir);
    while (file != NULL) {
        pat = path(file->d_name, open_dir(av));
        stat(pat, &meta);
        if (pat != NULL) {
            free(pat);
            pat = NULL;
        }
        print_info_l(file, meta);
        file = readdir(dir);
    }
    return 0;
}
