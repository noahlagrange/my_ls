/*
** EPITECH PROJECT, 2022
** infos
** File description:
** infoss
*/

#include <dirent.h>
#include <sys/stat.h>
#include <stdio.h>
#include <sys/types.h>
#include <pwd.h>
#include <time.h>
#include <stdlib.h>
#include <grp.h>

char *user_name(struct stat meta)
{
    struct passwd *pwd = NULL;

    pwd = getpwuid(meta.st_uid);
    return pwd->pw_name;
}

char *group_name(struct stat meta)
{
    struct group *pwd = NULL;

    pwd = getgrgid(meta.st_gid);
    return pwd->gr_name;
}

char *print_time(char *c)
{
    c = c + 4;
    c[12] = '\0';
    return c;
}
