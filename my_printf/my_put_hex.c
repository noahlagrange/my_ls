/*
** EPITECH PROJECT, 2022
** hexadecimal
** File description:
** MY_HEXADECIMAL
*/

#include <stdarg.h>

int my_putstr(char *str);

char *my_revstr(char *str);

int my_putchar(char c);

int hexadecimal_up(int nb)
{
    int index = 0;
    char max[9];
    char *hex = "0123456789ABCDEF";
    int rap = 0;

    while (nb > 16) {
        rap = nb % 16;
        max[index] = hex[rap];
        index++;
        nb = nb / 16;
    }
    max[index] = hex[nb];
    return my_putstr(my_revstr(max));
}

int hexadecimal_low(int nb)
{
    int index = 0;
    char max[9];
    char *hex = "0123456789abcdef";
    int rap = 0;

    while (nb > 16) {
        rap = nb % 16;
        max[index] = hex[rap];
        index++;
        nb = nb / 16;
    }
    max[index] = hex[nb];
    return my_putstr(my_revstr(max));
}

int hexadecimal_up_va_list(va_list *nb)
{
    return hexadecimal_up(va_arg(*nb, int));
}

int hexadecimal_low_va_list(va_list *nb)
{
    return hexadecimal_low(va_arg(*nb, int));
}
