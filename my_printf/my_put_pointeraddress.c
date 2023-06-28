/*
** EPITECH PROJECT, 2022
** POINTER_ADDRESS
** File description:
** printf
*/

#include <stdio.h>
#include <stdarg.h>

int my_putstr(char *str);

char *my_revstr(char *str);

int my_putchar(char c);

int hexadecimal_address(unsigned long nb)
{
    int len = 0;
    int index = 0;
    char max[50] = {0};
    char *hex = "0123456789abcdef";
    int rap = 0;

    while (nb > 16) {
        rap = nb % 16;
        max[index] = hex[rap];
        index++;
        nb = nb / 16;
    }
    max[index] = hex[nb];
    len += my_putstr("0x");
    len += my_putstr(my_revstr(max));
    return len;
}

int address(unsigned long a)
{
    return (hexadecimal_address(a));
}

int address_va_list(va_list *a)
{
    return address(va_arg(*a, unsigned long));
}
