/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2018
** File description:
** f_p
*/

#include "pal.h"

int test_it(int num, int tf, arg_t *ar)
{
    int count = 0;

    if (num == tf)
        return (0);
    for (int res = num; count <= ar->max; count++) {
        res = iter_str(res, ar);
        if (res == tf)
            return (count + 1);
    }
    return (-1);
}

void base_f_p(arg_t *arg)
{
    int sol = 0;
    int count = 0;
    int tf = dec_to_base(arg->pal, arg->base);

    for (int calc = 0; calc <= arg->pal; calc++) {
        count = test_it(dec_to_base(calc, arg->base), tf, arg);
        if (count != -1 && count >= arg->min && count <= arg->max) {
            printf("%d leads to %d in %d iteration(s) in base %d\n",
            calc, arg->pal, count, arg->base);
            sol++;
        }
    }
    if (sol == 0)
        printf("no solution\n");
}