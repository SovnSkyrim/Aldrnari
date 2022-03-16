/*
** EPITECH PROJECT, 2022
** add to str array
** File description:
** mysh
*/

#include "../include/stumper.h"

void add_to_array_copy(char **output, char **input)
{
    int j = 0;
    for (int i = 0; input[i]; i++) {
        for (; input[i][j]; j++) {
            output[i][j] = input[i][j];
        }
        output[i][j] = '\0';
        j = 0;
    }
}

char **my_add_to_array(char **array, char *input)
{
    int height = my_arrayheight(array);
    int len_input = my_strlen(input);
    int j = 0;

    char **output = malloc(sizeof(char *) * (height + 1));
    output[height + 1] = NULL;
    for (int i = 0; array[i]; i++)
        output[i] = malloc(sizeof(char) * (my_strlen(array[i] + 1)));
    add_to_array_copy(output, array);
    output[height] = malloc(sizeof(char) * (len_input + 1));
    for (int j = 0; input[j]; j++)
        output[height][j] = input[j];
    output[height][len_input] = '\0';
    free(array);
    free(input);
    return output;
}

char *my_add_to_str(char *base, char input)
{
    int length = my_strlen(base) + 1;
    char *output = malloc(sizeof(char) * (length + 1));
    output[length] = '\0';
    for (int i = 0; base[i]; i++)
        output[i] = base[i];
    output[length - 1] = input;
    return output;
}
