/*
** EPITECH PROJECT, 2022
** DECIMAL
** File description:
** MY_PUT_DECIMAL
*/

#include <stdarg.h>

int my_putstr(char *str);

int my_put_nbr(int nb);

int my_putchar(char c);

int my_put_decimal(int nb)
{
    return my_put_nbr(nb);
}

int my_put_decimal_va_list(va_list *nb)
{
    return my_put_decimal(va_arg(*nb, int));
}
