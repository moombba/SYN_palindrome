/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2018
** File description:
** f_n
*/

#include "pal.h"

void base_fn(arg_t *arg)
{
    int ite = 0;
    char *str = malloc(sizeof(char) * 110);
    int num = dec_to_base(arg->num, arg->base);

    while (ite <= arg->max) {
        sprintf(str, "%d\0", num);
        if (!is_str_pal(str) && ite >= arg->min) {
            printf("%d leads to %d in %d iteration(s) in base %d\n",
            arg->num, base_to_dec(num, arg->base), ite, arg->base);
            free(str);
            exit(0);
        }
        num = iter_str(num, arg);
        ite++;
    }
    printf("no solution\n");
    free(str);
    exit(0);
}