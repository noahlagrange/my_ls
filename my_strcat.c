/*
** EPITECH PROJECT, 2022
** MY_STRCAT
** File description:
** task02
*/

#include <unistd.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i = 0;

    if (src[i] != '\0') {
        while (src[i] != '\0') {
            dest[len + i] = src[i];
            i += 1;
        }
        dest[len + i] = '\0';
    }
    return (dest);
}
