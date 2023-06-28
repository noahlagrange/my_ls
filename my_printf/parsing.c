/*
** EPITECH PROJECT, 2022
** MY_PARCING
** File description:
** printf
*/
#include "structure.h"
#include "my.h"
#include <stdarg.h>

int parsing(char *str, va_list *nb, int *ind)
{
    int i = 0;
    int len = 0;
    int rap = my_getnbr(str);
    is_dot_t flags[2] = {
        {'f', &my_put_float_va_list},
        {'s', &my_put_s_esp_va_list}};

    while (str[i] >= '0' && str[i] <= '9') {
        *ind += 1;
        i++;
    }
    for (int j = 0; j < 2 ; j++) {
        if (flags[j].letter == str[i]) {
            len = flags[j].func(nb, rap);
            return len;
        }
    }
    return *ind;
}
