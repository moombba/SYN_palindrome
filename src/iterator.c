/*
** EPITECH PROJECT, 2019
** palindrom
** File description:
** iterator
*/

#include "pal.h"

int iter(int num)
{
    int rev = rev_num(num);

    num += rev;
    return (num);
}

int iter_str(int num, arg_t *ar)
{
    char *rev = malloc(sizeof(char) * 22);
    int dec_n;
    int i_rev;

    sprintf(rev, "%d\0", num);
    rev = rev_str(rev);
    i_rev = atoi(rev);
    i_rev = base_to_dec(i_rev, ar->base);
    dec_n = base_to_dec(num, ar->base);
    free(rev);
    return (dec_to_base(i_rev + dec_n, ar->base));
}