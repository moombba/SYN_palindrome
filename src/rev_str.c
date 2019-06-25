/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** rev_str
*/

#include "pal.h"

char *rev_str(char *str)
{
    int wr = 0;
    int run = 0;
    char *rev = malloc(sizeof(char) * (strlen(str) + 1));

    for (; str[run]; run++);
    run--;
    for (; run >= 0; run--, wr++) {
        rev[wr] = str[run];
    }
    rev[wr] = '\0';
    return (rev);
}

int is_str_pal(char *str)
{
    char *rev = rev_str(str);

    for (int i = 0; str[i]; i++) {
        if (str[i] != rev[i])
            return (-1);
    }
    return (0);
}