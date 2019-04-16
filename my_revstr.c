/*
** EPITECH PROJECT, 2018
** str cpy
** File description:
** desc
*/
#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);
int my_putstr(char const *str);
char *my_strncpy(char *dest, char const *src);

char *my_revstr(char *str)
{
    int len = 0;
    int x;
    int i = 0;
    char *char_stock;

    while (str[len] != '\0')
        len++;
    x = len;
    char_stock = malloc(sizeof(char) * len + 1);
    for (i; i != x + 1; i++) {
        char_stock[i] = str[len];
        len = len - 1;
    }
    char_stock[i + 1] = '\0';
    for (int i = 1; char_stock[i] != '\0'; i++)
        my_putchar(char_stock[i]);
    return (char_stock);
}