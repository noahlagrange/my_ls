/*
** EPITECH PROJECT, 2022
** MY_PUTSTR*
** File description:
** TASK02
*/

#include <stdarg.h>

int my_putchar(char c);

int my_putstr(char *str)
{
    int rap = 0;
    int size;

    size = 0;
    while (str[size] != '\0') {
        rap += my_putchar(str[size]);
        size += 1;
    }
    return (rap);
}

int my_putstr_va_list(va_list *str)
{
    return (my_putstr(va_arg(*str, char *)));
}
