/*
** EPITECH PROJECT, 2021
** put_in_terminal
** File description:
** my_ls
*/

#include <unistd.h>
#include "../include/stumper.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}

void my_putstr_n(char const *str)
{
    write(1, str, my_strlen(str));
    my_putchar('\n');
}
