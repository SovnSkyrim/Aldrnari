/*
** EPITECH PROJECT, 2021
** my_strtonbr
** File description:
** cpool
*/

#include "../include/stumper.h"

int my_strtonbr(char *str)
{
    int result = 0;
    int is_neg = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (result > 0) {
            result = result * 10;
            result += str[i] - '0';
        } else if (str[i] == '-') {
            is_neg = -1;
        } else {
            result += str[i] - '0';
        }
    }
    result = result * is_neg;
    return result;
}
