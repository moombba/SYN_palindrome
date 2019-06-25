/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2018
** File description:
** convert_base
*/

#include "pal.h"

int powa(int num, int pow)
{
    unsigned int res = num;

    if (pow == 0)
        return (1);
    for (int i = 1; i < pow; i++)
        res *= num;
    return (res);
}

int dec_to_base(int num, int base)
{
    int res = 0;
    int ite = 1;

    while (num > 0) {
        res += (num % base) * ite;
        ite *= 10;
        num /= base;
    }
    return (res);
}

int base_to_dec(int num, int base)
{
    int ite = 0;
    int res = 0;

    while (num > 0) {
        res += (num % 10) * powa(base, ite);
        num /= 10;
        ite++;
    }
    return (res);
}