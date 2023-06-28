/*
** EPITECH PROJECT, 2022
** MY_STRCMP
** File description:
** 17
*/

char is_min(char c1)
{
    char min_man;

    if (c1 >= 'A' && c1 <= 'Z') {
        min_man = c1 + 32;
        return min_man;
    }
    return c1;
}

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] != '\0' || s2[i] != '\0') {
        if (is_min(s1[i]) > is_min(s2[i])) {
            return (1);
        }
        if (is_min(s1[i]) < is_min(s2[i])) {
            return (-1);
        }
        i += 1;
    }
    if (is_min(s1[i]) == '\0' && is_min(s2[i]) != '\0') {
        return (-1);
    }
    if (is_min(s1[i]) != '\0' && is_min(s2[i]) == '\0') {
        return (1);
    }
    return (0);
}
