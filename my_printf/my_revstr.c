/*
** EPITECH PROJECT, 2022
** MY_REVSTR
** File description:
** task03
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int len = 0;
    int i = 0;
    char stock = 0;

    len = my_strlen(str) - 1;
    while (i < len) {
        stock = str[i];
        str[i] = str[len];
        str[len] = stock;
        i += 1;
        len = len - 1;
    }
    return (str);
}
