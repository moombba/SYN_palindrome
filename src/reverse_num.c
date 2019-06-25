/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** reverse_num
*/

#include "pal.h"

int rev_num(int num)
{
    int res = 0;

    for (; num != 0;) {
        res *= 10;
        res += num % 10;
        num /= 10;
    }
    return (res);
}

int is_pal(int num)
{
    if (num == rev_num(num))
        return (0);
    return (-1);
}