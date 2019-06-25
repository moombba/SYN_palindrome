/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2018
** File description:
** handle_flag
*/

#include "pal.h"

void bad_arg(void)
{
    printf("invalid argument\n");
    exit(84);
}

void set_arg2(char *flg, char *val, arg_t *ar)
{
    int num = atoi(val);

    if (!strcmp(flg, "b")) {
        if (num > 1 && num <= 10)
            ar->base = num;
        else
            bad_arg();
    }
    if (!strcmp(flg, "imin")) {
        if (num >= 0)
            ar->min = num;
        else
            bad_arg();
    }
    if (!strcmp(flg, "imax")) {
        if (num >= 0)
            ar->max = num;
        else
            bad_arg();
    }
}

void set_arg(char *flg, char *val, arg_t *ar)
{
    int num = atoi(val);

    if (!strcmp(flg, "n")) {
        if (num >= 0 && ar->pal == 0 && ar->num == 0)
            ar->num = num;
        else {
            bad_arg();
        }
    }
    if (!strcmp(flg, "p")) {
        if (num >= 0 && ar->num == 0 && ar->pal == 0)
            ar->pal = atoi(val);
        else {
            bad_arg();
        }
    }
    set_arg2(flg, val, ar);
}

void init_st(arg_t *ar)
{
    ar->num = 0;
    ar->pal = 0;
    ar->base = 10;
    ar->min = 0;
    ar->max = 100;
}

void chk_flg(char **av, arg_t *ar)
{
    init_st(ar);
    for (int i = 1; av[i]; i++) {
        if (av[i][0] == '-' && (av[i + 1] == NULL || !is_num(av[i + 1]))) {
            bad_arg();
        }
        if (av[i][0] == '-' && !is_alpha(&av[i][1])) {
            bad_arg();
        }
        if (av[i][0] != '-' && is_alpha(av[i]) == 1) {
            bad_arg();
        }
        if (av[i][0] == '-')
            set_arg(&av[i][1], av[i + 1], ar);
    }
    if (ar->min > ar->max)
        bad_arg();
}