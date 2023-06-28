/*
** EPITECH PROJECT, 2022
** OCTAL
** File description:
** PRINT OCTAL
*/

#include <stdarg.h>
#include <stddef.h>

int my_strlen(char const *str);

int my_putstr(char *str);

char *my_revstr(char *str);

int my_putchar(char c);

int my_put_octal(unsigned int nb)
{
    int index = 0;
    char max[8] = {0};
    char *hex = "01234567";
    int rap = 0;

    while (nb != 0) {
        rap = nb % 8;
        max[index] = hex[rap];
        nb = nb / 8;
        index++;
    }
    return my_putstr(my_revstr(max));
}

int my_put_octal_va_list(va_list *nb)
{
    return my_put_octal(va_arg(*nb, int));
}

char *my_octal(unsigned int nb)
{
    int index = 0;
    char max[9] = {0};
    char *hex = "01234567";
    int rap = 0;
    char *c = NULL;

    while (nb != 0) {
        rap = nb % 8;
        max[index] = hex[rap];
        nb = nb / 8;
        index++;
    }
    c = my_revstr(max);
    return c;
}
