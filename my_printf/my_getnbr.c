/*
** EPITECH PROJECT, 2022
** MY_GETNBR
** File description:
** test
*/

int my_getnbr(char *str)
{
    int nb = 0;
    int rappel = 0;
    int i = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            rappel += 1;
        }
        i += 1;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nb = nb * 10 + str[i] - 48;
        i += 1;
    }
    if (rappel % 2 != 0) {
        nb = -nb;
    }
    return (nb);
}
