/*
** EPITECH PROJECT, 2022
** MY_STRLEN
** File description:
** TASK03
*/

int my_strlen(char const *str)
{
    int len = 0;

    while (str[len] != '\0') {
        len += 1;
    }
    return (len);
}
