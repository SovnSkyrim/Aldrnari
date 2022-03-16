/*
** EPITECH PROJECT, 2022
** arraycopy
** File description:
** libpool
*/

#include "../include/stumper.h"

char **my_arraycpy(char **env)
{
    int height = my_arrayheight(env);
    char **cp_env = malloc(sizeof(char *) * (height + 1));
    int i = 0;
    int j = 0;

    for (; env[i]; i++) {
        cp_env[i] = malloc(sizeof(char) * (my_strlen(env[i]) + 1));
        for (; env[i][j]; j++)
            cp_env[i][j] = env[i][j];
        cp_env[i][j] = '\0';
        j = 0;
    }
    cp_env[height] = NULL;
    return cp_env;
}
