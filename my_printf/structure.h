/*
** EPITECH PROJECT, 2022
** strcuture
** File description:
** pointeur de fonction
*/
#include <stdarg.h>

#pragma once

typedef struct pf {
    char lettre;
    int (*func)(va_list *);
} pf_t;

typedef struct is_dot {
    char letter;
    int (*func)(va_list *, int);
} is_dot_t;
