/*
** EPITECH PROJECT, 2019
** palindrom
** File description:
** main
*/

#include "pal.h"

int pal_check(int pal, int base)
{
    char *str = malloc(sizeof(char) * 12);
    int num = dec_to_base(pal, base);

    sprintf(str, "%d\0", num);
    if (is_str_pal(str) == -1) {
        free(str);
        exit(84);
    }
    return (0);
}

int main(int ac, char **av)
{
    arg_t ar;
    char *str = malloc(sizeof(char) * 12);

    (void)ac;
    chk_flg(av, &ar);
    if (ar.num != 0)
        base_fn(&ar);
    if (ar.pal != 0 && !pal_check(ar.pal, ar.base)) {
        base_f_p(&ar);
    }
    free(str);
    return (0);
}