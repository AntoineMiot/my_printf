/*
** EPITECH PROJECT, 2018
** printf
** File description:
** my_prinft
*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int my_put_nbr(int nb);
int my_put_octal(int nb);
int my_put_hexa(int nb);
int my_put_hexa_two(int nb);
void my_putchar(char c);

int i;

int flag_d_i(va_list ap)
{
    int k;
    
    k = va_arg(ap, int);
    my_put_nbr(k);
}

int flag_o(va_list ap)
{
    int k;
    
    k = va_arg(ap, int);
    my_put_octal(k);
}

int flag_xx(va_list ap)
{
    int k;
    
    k = va_arg(ap, int);
    my_put_hexa(k);
}

int flag_x(va_list ap)
{
    int k;
    
    k = va_arg(ap, int);
    my_put_hexa_two(k);
}

int flag_c(va_list ap)
{
    int k;
    
    k = va_arg(ap, int);
    my_putchar(k);
}