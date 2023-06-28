/*
** EPITECH PROJECT, 2022
** MY.H
** File description:
** PROTO
*/


#pragma once
#include <stdarg.h>

int my_putchar(char c);
int my_putstr(char *str);
int my_putstr_va_list(va_list *str);
int my_put_nbr_va_list(va_list *nb);
int my_getnbr(char const *str);
int my_strlen(char const *str);
char *my_revstr(char *str);
int hexadecimal_low(int nb);
int hexadecimal_up_va_list(va_list *nb);
int hexadecimal_low_va_list(va_list *nb);
int hexadecimal_up(int nb);
int my_put_octal(unsigned int nb);
int my_put_octal_va_list(va_list *nb);
int my_put_decimal(char nb);
int my_put_decimal_va_list(va_list *nb);
int my_put_octal_unprint( int nb);
int my_put_octal_unprint_va_list(va_list *nb);
int hexadecimal_address(int nb);
int address_va_list(va_list *a);
int my_put_float(float nb, int T);
int my_put_float_va_list(va_list *nb ,int t);
char *my_strcpy(char *dest, char const *src);
int my_put_nothing(va_list *list);
int my_put_nbr(int nb);
int my_put_s_esp_va_list(va_list *nb ,int t);
int my_printf(const char *format, ...);
