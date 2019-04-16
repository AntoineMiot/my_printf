/*
** EPITECH PROJECT, 2018
** my_put_bin
** File description:
** display a binary number
*/
#include <stdio.h>
#include <stdlib.h>

char *my_revstr(char *str);

unsigned int my_put_bin(unsigned int integer)
{
    unsigned int bin_rest;
    int i = 0;
    char *str_res;

    str_res = malloc(sizeof(char) * 100);
    while (integer > 0) {
        str_res[i] = integer % 2 + 48;
        integer = integer / 2;
        i++;
    }
    str_res[i + 1] = '\0';
    my_revstr(str_res);
}