/*
** EPITECH PROJECT, 2022
** STRUCT
** File description:
** STRUCT
*/

#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdio.h>

#pragma once

typedef struct flags {
    char *flag;
    int (*func)(DIR *dir);
} flags_t;

int is_t(DIR *dir);
int is_a(DIR *dir);
int is_l(DIR *dir, char **av);
void is_empty(struct dirent *file);
int my_printf(const char *format, ...);
int my_putchar(char c);
char *open_dir(char **arr);
struct dirent **my_sort_struct_array(struct dirent **list, int size);
int my_strcmp(char const *s1, char const *s2);
void space_2(struct dirent *file, int c);

flags_t ls_flag[] = {{"-a", &is_a}, {"-t", &is_t}};

#include <string.h>
#include <errno.h>
