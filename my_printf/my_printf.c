/*
** EPITECH PROJECT, 2022
** MINI_PRINTF
** File description:
** MY_PRINT
*/
#include <stdlib.h>
#include <stdio.h>
#include "structure.h"
#include "my.h"
#include <stdarg.h>

int my_putchar(char c);

char *my_strcpy(char *dest, char const *src);

int parsing(char *str, va_list *list, int *ind);

int my_put_nbr_va_list(va_list *nb);

int my_putchar_va_list(va_list *c);

int my_putstr_va_list(va_list *str);

int is_modulo(va_list *mod);

int is_flag(char c, va_list *list)
{
    int len = 0;
    pf_t flag[6] = {
        {'d', &my_put_nbr_va_list},
        {'i', &my_put_nbr_va_list},
        {'c', &my_putchar_va_list},
        {'s', &my_putstr_va_list},
        {'%', &is_modulo},
        {'n', &my_put_nothing}};

    for (int i = 0; i < 6 ; i++) {
        if (flag[i].lettre == c) {
            len = flag[i].func(list);
            return len;
        }
    }
    return 0;
}

int is_flag_advence(char c, va_list *list)
{
    int len = 0;
    pf_t flag[6] = {
        {'x', &hexadecimal_low_va_list},
        {'X', &hexadecimal_up_va_list},
        {'o', &my_put_octal_va_list},
        {'S', &my_put_octal_unprint_va_list},
        {'u', &my_put_decimal_va_list},
        {'p', &address_va_list}};

    for (int i = 0; i < 6 ; i++) {
        if (flag[i].lettre == c) {
            len = flag[i].func(list);
            return len;
        }
    }
    return 0;
}

int all_flags(char const *str, va_list *list, int *ind)
{
    int len = 0;

    while (str[*ind] == ' ')
        *ind += 1;
    if (str[*ind - 1] == ' ' && str[*ind] != '%')
        len += my_putchar(' ');
    len += is_flag(str[*ind], list);
    len += is_flag_advence(str[*ind], list);
    if (len > 0)
        *ind += 1;
    if (len == 0 && str[*ind + 1] == '\0') {
        if (str[*ind] != '.' && str[*ind] != 'f') {
            *ind += 1;
        }
    }
    if (len == 0 && str[*ind] != '.' && str[*ind] != 'f' && str[*ind] != '\0') {
        len += my_putchar('%');
        *ind += 1;
    }
    return len;
}

int is_modulo_dot(char const *str, int *ind, va_list *list)
{
    int i = 0;
    int len = 0;
    char *cpy = malloc(sizeof(char) * my_strlen(str) + 1);

    cpy = my_strcpy(cpy, str);
    if (cpy[*ind] == '.') {
        len += parsing(cpy + *ind + 1, list, &i);
    }
    if (cpy[*ind] == 'f')
        len += parsing(cpy + *ind , list, &i);
    if (len > 0)
        *ind += i + 2;
    free(cpy);
    return len;
}

int my_printf(const char *format, ...)
{
    int i = 0;
    va_list list;
    int len = 0;

    va_start(list, format);

    while (format[i] != '\0') {
        if (format[i] == '%') {
            i += 1;
            len += all_flags(format, &list, &i);
            len += is_modulo_dot(format, &i, &list);
        }
        if (format[i] != '\0' && format[i] != '%') {
            len += my_putchar(format[i]);
            i += 1;
        }
    }
    va_end(list);
    return (len);
}
