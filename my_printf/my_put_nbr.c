/*
** EPITECH PROJECT, 2022
** MY_PUT_NBR
** File description:
** 3
*/

#include <stdarg.h>

int my_putchar(char c);

int my_dec(int a)
{
    int b = 1;
    while (a > 9) {
        a = a / 10;
        b = b * 10;
    }
    return (b);
}

int my_number(int len, int nb, int modulo)
{
    int rap = 0;

    while (len > 0 ) {
        modulo = nb % len;
        nb = nb / len;
        rap += my_putchar(nb + 48);
        nb = modulo;
        len = len / 10;
    }
    return (rap);
}

int my_put_nbr(int nb)
{
    int len = 0;
    int stock = nb;
    int modulo = 0;
    int rap = 0;

    if (nb < 0) {
        rap = rap + my_putchar('-');
        stock = stock * -1;
        nb = stock;
    }
    len = my_dec(stock);
    rap += my_number(len, nb, modulo);
    return (rap);
}

int my_put_nbr_va_list(va_list *nb)
{
    return my_put_nbr((va_arg(*nb, int)));
}
