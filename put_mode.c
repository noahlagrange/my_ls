/*
** EPITECH PROJECT, 2022
** MODE
** File description:
** PRINTF
*/

#include <stdio.h>
int my_printf(const char *format, ...);

char *my_octal(unsigned int nb);

void type_file(char *max, int i)
{
    if (max[0] == '1' && max[1] == '2' && i == 0)
        my_printf("-");
    if (max[0] == '1' && i == 0)
        my_printf("-");
    if (max[0] == '4' && i == 0)
        my_printf("d");
}

void trad_mod(char *max, int i)
{
    if (max[i] == '7')
        my_printf("rwx");
    if (max[i] == '6')
        my_printf("rw-");
    if (max[i] == '5')
        my_printf("r-x");
    if (max[i] == '4' && i > 2)
        my_printf("r--");
    if (max[i] == '3')
        my_printf("-wx");
    if (max[i] == '2')
        my_printf("-w-");
    if (max[i] == '1' && i > 2)
        my_printf("--x");
    if (max[i] == '0' && i > 2)
        my_printf("---");
}

void mode_type(unsigned int nb)
{
    int i = 0;
    char *max = NULL;
    max = my_octal(nb);
    while (max[i] != '\0') {
        type_file(max,i);
        trad_mod(max, i);
        i += 1;
    }
}
