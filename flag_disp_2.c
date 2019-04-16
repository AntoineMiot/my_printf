/*
** EPITECH PROJECT, 2018
** printf
** File description:
** my_prinft
*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int i;
int my_put_hexa_adress(int nb);
unsigned int my_put_bin(unsigned int integer);
int my_putstr_ascii(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
unsigned int my_put_unsigned(unsigned int nb);

int flag_p(va_list ap)
{
    int k;
    
    k = va_arg(ap, int);
    my_put_hexa_adress(k);
}

int flag_s(va_list ap)
{
    char *n;
    
    n = va_arg(ap, char *);
    my_putstr(n);
}

int flag_ss(va_list ap)
{
    char *n;
    
    n = va_arg(ap, char*);
    my_putstr_ascii(n);
}

int flag_u(va_list ap)
{
    unsigned int z;
    
    z = va_arg(ap, unsigned int);
    my_put_unsigned(z);
}

int flag_b(va_list ap)
{
    unsigned int z;
    
    z = va_arg(ap, unsigned int);
    my_put_bin(z);
}