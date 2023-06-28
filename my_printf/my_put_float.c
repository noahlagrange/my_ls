/*
** EPITECH PROJECT, 2022
** FLOAT
** File description:
** F
*/

#include <stdarg.h>

int my_putchar(char c);

int my_put_nbr(int nb);

int my_put_float(double nb, int T)
{
    int len = 0;
    int vnb = nb;

    if (T == 0)
        T = 6;
    len += my_put_nbr(vnb);
    nb -= vnb;
    len += my_putchar('.');
    for (int i = 0; i < T; i++) {
        nb = nb *10;
        if (nb < 0)
            nb = nb * -1;
        if (nb < 1)
            len += my_put_nbr(nb);
    }
    my_put_nbr(nb);
    return len;
}

int my_put_float_va_list(va_list *nb ,int t)
{
    return my_put_float(va_arg(*nb, double), t);
}
