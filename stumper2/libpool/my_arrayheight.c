/*
** EPITECH PROJECT, 2022
** my_arrayheight
** File description:
** libpool
*/

int my_arrayheight(char **a)
{
    int res = 0;

    while (a[res])
        res++;

    return res;
}
