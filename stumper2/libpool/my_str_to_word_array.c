/*
** EPITECH PROJECT, 2021
** str_to_word_array
** File description:
** 25hr
*/

#include "../include/stumper.h"

int count_c(char const *str, char c)
{
    int nb_c = 2;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
            nb_c++;
    }
    return nb_c;
}

void making_array(char **array, char const *str, char c)
{
    int x = 0;
    int y = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != c) {
            array[y][x] = str[i];
            x++;
        } else {
            array[y][x] = '\0';
            y++;
            x = 0;
        }
    }
    array[y][x] = '\0';
    y++;
    array[y] = NULL;
}

char **my_str_to_word_array(char const *str, char c)
{
    int x = 0;
    int y = 0;
    int nb_space = count_c(str, c);
    char **array = malloc(sizeof(char *) * (nb_space + 1));

    for (int i = 0; str[i] != '\0'; i++) {
        x++;
        if (str[i] == c) {
            array[y] = malloc(sizeof(char) * (x + 1));
            y++;
            x = 0;
        }
    }
    array[y] = malloc(sizeof(char) * (x + 1));
    making_array(array, str, c);
    return (array);
}
