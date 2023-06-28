/*
** EPITECH PROJECT, 2022
** MY_BINARY
** File description:
** PRINTF
*/
#include <stdarg.h>

int my_putstr(char *str);

char *my_revstr(char *str);

int my_putchar(char c);

int my_put_binary(int nb)
{
    int index = 0;
    char max[255] = {0};
    char *hex = "01";
    int rap = 0;

    while (nb > 1) {
        rap = nb % 2;
        max[index] = hex[rap];
        index++;
        nb = nb / 2;
    }
    max[index] = hex[nb];
    return my_putstr(my_revstr(max));
}

int my_put_binary_va_list(va_list *nb)
{
    return my_put_binary(va_arg(*nb, int));
}
