/*
** EPITECH PROJECT, 2022
** my_strxdup
** File description:
** libpool
*/

#include "../include/stumper.h"

char *my_strxdups(char *input, int s)
{
    char *output = malloc(sizeof(char) * (my_strlen(input) - (s - 1)));
    int b = 0;
    for (int i = s + 1; input[i]; i++) {
        output[b] = input[i];
        b++;
    }
    output[b] = '\0';
    return output;
}

char *my_strxdupe(char *input, int e)
{
    char *output = malloc(sizeof(char) * (my_strlen(input) - (e - 1)));

    for (int i = 0; i < e; i++)
        output[i] = input[i];
    output[e] = '\0';
    return output;
}

char *my_strdupc(char *input, char c)
{
    int l = 0;
    while (input[l] != c)
        l++;
    return my_strxdups(input, l);
}

char *my_strdup(char *input)
{
    int len = my_strlen(input) + 1;
    char *output = malloc(sizeof(char) * len);
    for (int i = 0; input[i]; i++)
        output[i] = input[i];
    output[len] = '\0';
    return output;
}
