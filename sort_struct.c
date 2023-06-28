/*
** EPITECH PROJECT, 2022
** sort_struct
** File description:
** sort ls
*/

#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdio.h>

int my_strcmp(char const *s1, char const *s2);

int sort_struct(int j, int rp, struct dirent **list)
{
    if (my_strcmp(list[rp]->d_name, list[j]->d_name) == 1) {
        rp = j;
    }
    return rp;
}

struct dirent **my_sort_struct_array(struct dirent **list, int size)
{
    int i = 0;
    int rp_ind = 0;
    struct dirent *rp_struct = NULL;

    for (i = 0; i < size - 1; i++ ) {
        rp_ind = i;
        rp_struct = list[i];
        for (int j = i + 1; j < size ; j++) {
            rp_ind = sort_struct(j, rp_ind, list);
        }
        if (rp_ind != i) {
            list[i] = list[rp_ind];
            list[rp_ind] = rp_struct;
        }
    }
    return list;
}
