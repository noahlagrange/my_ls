/*
** EPITECH PROJECT, 2022
** MY_PUTCHAR
** File description:
** 1
*/
#include <unistd.h>

#include <stdarg.h>

int  my_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int my_putchar_va_list(va_list *AV)
{
    return (my_putchar(va_arg(*AV, int)));
}
