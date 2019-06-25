/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2018
** File description:
** check
*/

#include "pal.h"

int is_num(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] < '0' || str[i] > '9')
            return (0);
    }
    return (1);
}

int is_alpha(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] < 'a' || str[i] > 'z')
            return (0);
    }
    return (1);
}