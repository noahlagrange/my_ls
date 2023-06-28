/*
** EPITECH PROJECT, 2022
** UNPRITABLE_OCTAL_S
** File description:
** PRINTF
*/

#include <stdarg.h>

int my_putstr(char *str);

char *my_revstr(char *str);

int my_putchar(char c);

int my_put_octal(unsigned int nb);

int my_put_octal_unprint( int nb)
{
    int len = 0;

    if (nb >= 0 && nb <= 32) {
        len += my_putchar('\\');
        len += my_put_octal(nb);
    }
    if (nb >= 127) {
        len += my_putchar('\\');
        len += my_put_octal(nb);
    }
    return len;
}

int my_put_octal_unprint_va_list(va_list *nb)
{
    return my_put_octal_unprint(va_arg(*nb, int));
}
