/*
** EPITECH PROJECT, 2022
** MY_LS
** File description:
** PROJET
*/

#include "struct.h"
char *open_flag(char **arr);

int the_flag(DIR *dir, char **av)
{
    for (int i = 0; i < 1; i++) {
        if (my_strcmp(ls_flag[i].flag, open_flag(av)) == 0) {
            ls_flag[i].func(dir);
            return 1;
        }
        if (my_strcmp("-l", open_flag(av)) == 0) {
            is_l(dir, av);
            return 1;
        }
    }
    return 0;
}

int print_name(DIR *dir)
{
    struct dirent *file = NULL;

    file = readdir(dir);
    while (file != NULL) {
        if (file->d_name[0] != '.')
            my_printf("%s\n", file->d_name);
        file = readdir(dir);
    }
    return 1;
}

int print_info(DIR *dir, char **av)
{
    int flag = the_flag(dir, av);

    if (flag != 0)
        return 0;
    print_name(dir);
    return 0;
}

int print_info_noflag(DIR *dir)
{
    print_name(dir);
    return 0;
}

int main(int ac, char **av)
{
    DIR *dir;
    dir = opendir(open_dir(av));
    if (dir == NULL) {
        my_printf("%s\n", strerror(errno));
        return 84;
    }
    if (ac == 1) {
        print_info_noflag(dir);
    } else {
        print_info(dir, av);
    }
    closedir(dir);
    return 0;
}
