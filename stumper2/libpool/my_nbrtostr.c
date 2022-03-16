/*
** EPITECH PROJECT, 2021
** my_nbrtostr
** File description:
** cpool
*/

#include "../include/stumper.h"

char *my_nbrtostr_2(int i, int result, int nb_neg)
{
    int k = 0;
    char *output = malloc(sizeof(char) * (i + 2));
    while (i > 0) {
        output[k] = result % 10 + 48;
        result = result / 10;
        k++;
        i--;
    }
    if (nb_neg == - 1) {
        output[k] = '-';
        k++;
    }
    output[k] = '\0';
    return (output);
}

char *my_nbrtostr(int result)
{
    int i = 0;
    int k = 0;
    int test = result;
    int nb_neg = 0;
    if (test < 0) {
        result = result *( - 1);
        nb_neg = - 1;
        test = result;
    }
    while (test > 0) {
        i++;
        test = test / 10;
    }
    return (my_revstr(my_nbrtostr_2(i, result, nb_neg)));
}
