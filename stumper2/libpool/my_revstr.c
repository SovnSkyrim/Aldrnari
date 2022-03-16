/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** cpool
*/

#include "../include/stumper.h"

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    int a = len - 1;
    int i = 0;
    char *revstr = malloc(sizeof(char) * (len + 1));

    while ( i != len ) {
        revstr[i] = str[a];
        a--;
        i++;
    }
    revstr[i] = '\0';
    return (revstr);
}
