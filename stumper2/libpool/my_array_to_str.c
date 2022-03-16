/*
** EPITECH PROJECT, 2022
** my_array_to_str
** File description:
** antman
*/

#include "../include/stumper.h"

void array_to_str_copy(char **array, char **output, int i, unsigned int *pos)
{
    for (int j = 0; array[i][j] != '\0'; j++) {
        output[0][*pos] = array[i][j];
        *pos = *pos + 1;
    }
}

char *my_array_to_str(char **array)
{
    unsigned int size;
    unsigned int i = 0;
    unsigned int pos = 0;
    for (; array[i] != NULL; i++) {
        for (int j = 0; array[i][j] != '\0'; j++) {
            size++;
        }
    }
    char *output = malloc(sizeof(char) * (size + i + 1));
    for (int i = 0; array[i] != NULL; i++)
        array_to_str_copy(array, &output, i, &pos);
    output[size + i] = '\0';
    free(array);
    return output;
}
