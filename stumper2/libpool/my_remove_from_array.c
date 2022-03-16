/*
** EPITECH PROJECT, 2022
** remove from array
** File description:
** libpool
*/

#include "../include/stumper.h"

int my_remove_from_array(char **input_arr, char *input_str)
{
    int pos = 0;
    int height = my_arrayheight(input_arr);
    while (my_strcompare(input_str,
        my_str_to_word_array(input_arr[pos], '=')[0]) != SUCCESS) {
        pos++;
    }
    if (pos == height)
        return ERROR;
    while (input_arr[pos] && input_arr[pos + 1]) {
        input_arr[pos] = input_arr[pos + 1];
        pos++;
    }
    input_arr[height] = NULL;
    return SUCCESS;
}

void malloc_rem_from_array(char **input_arr, char **output_arr, int i, int pos)
{
    if (i < pos && i - 1 > 0)
        i--;
    int len = my_strlen(input_arr[i]);
    output_arr[i] = malloc(sizeof(char) * (len + 1));
    output_arr[i][len] = '\0';
}

void cpy_rem_from_array(char **input_arr, char **output_arr, int i, int pos)
{
    if (i < pos && i - 1 > 0)
        i--;
    for (int j = 0; input_arr[i][j]; j++)
        output_arr[i][j] = input_arr[i][j];
}

char **my_remove_from_array_malloc(char **input_arr, char *input_str)
{
    int height = my_arrayheight(input_arr);
    char **output_arr = malloc(sizeof(char *) * height);
    int pos = 0;
    int len = 0;
    while (my_strcompare(input_str,
        my_str_to_word_array(input_arr[pos], ' ')[0]) != SUCCESS) {
        pos++;
    }
    for (int i = 0; input_arr[i]; i++) {
        malloc_rem_from_array(input_arr, output_arr, i, pos);
        cpy_rem_from_array(input_arr, output_arr, i, pos);
    }
    return output_arr;
}
