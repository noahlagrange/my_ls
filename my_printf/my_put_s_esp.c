/*
** EPITECH PROJECT, 2022
** ESPACE_S
** File description:
** PRINTF
*/
#include "my.h"

int my_putstr(char *str);

int my_put_s_esp(char *str, int T)
{
    int i = 0;
    int len = 0;

    while (str[i] != '\0' && i < T) {
        len += my_putchar(str[i]);
        i++;
    }
    return len;
}

int my_put_s_esp_va_list(va_list *nb ,int t)
{
    return my_put_s_esp(va_arg(*nb, char *), t);
}
