/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2018
** File description:
** pal
*/

#ifndef PAL_H_
#define PAL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "struct.h"
#include <string.h>

int is_num(char *str);
void chk_flg(char **av, arg_t *ar);
int iter(int num);
int is_alpha(char *str);
void init_st(arg_t *ar);
int rev_num(int num);
int is_pal(int num);
void chk_flg(char **av, arg_t *ar);
char *rev_str(char *str);
int base_to_dec(int num, int base);
int dec_to_base(int num, int base);
void f_n(arg_t *arg);
int is_str_pal(char *str);
int powa(int num, int pow);
int iter_str(int num, arg_t *ar);
void base_fn(arg_t *arg);
void base_f_p(arg_t *arg);
void f_p(arg_t *arg);

#endif /* !PAL_H_ */