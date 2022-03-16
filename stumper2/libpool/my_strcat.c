/*
** EPITECH PROJECT, 2021
** strcat
** File description:
** not cpool but did it anyway
*/

#include "../include/stumper.h"

char *concatenating3(char *begin, char *middle, char *end)
{
    int len_output = my_strlen(begin) + my_strlen(middle) + my_strlen(end);
    char *output = malloc(sizeof(char) * (len_output + 1));
    int i_out = 0;
    for (int i_in = 0; begin[i_in] != '\0'; i_in++) {
        output[i_out] = begin[i_in];
        i_out++;
    }
    for (int i_in = 0; middle[i_in] != '\0'; i_in++) {
        output[i_out] = middle[i_in];
        i_out++;
    }
    for (int i_in = 0; end[i_in] != 0; i_in++) {
        output[i_out] = end[i_in];
        i_out++;
    }
    output[i_out] = '\0';
    return (output);
}

char *concatenating2(char *begin, char *end)
{
    int len_output = my_strlen(begin) + my_strlen(end);
    char *output = malloc(sizeof(char) * (len_output + 1));
    int i_out = 0;
    for (int i_in = 0; begin[i_in] != '\0'; i_in++) {
        output[i_out] = begin[i_in];
        i_out++;
    }
    for (int i_in = 0; end[i_in] != 0; i_in++) {
        output[i_out] = end[i_in];
        i_out++;
    }
    output[i_out] = '\0';
    return (output);
}
