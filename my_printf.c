/*
** EPITECH PROJECT, 2018
** printf
** File description:
** my_prinft
*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int i = 0;
int re = 0;
void my_putchar(char c);
int flag_d_i(va_list ap);
int flag_o(va_list ap);
int flag_xx(va_list ap);
int flag_x(va_list ap);
int flag_c(va_list ap);
int flag_p(va_list ap);
int flag_s(va_list ap);
int flag_ss(va_list ap);
int flag_u(va_list ap);
int flag_b(va_list ap);

void print_2(char *s, va_list ap)
{
    int k;

    if (s[i] == 'd' || s[i] == 'i')
        flag_d_i(ap);
    if (s[i] == 'o')
        flag_o(ap);
    if (s[i] == 'X')
        flag_xx(ap);
    if (s[i] == 'x')
        flag_x(ap);
    if (s[i] == 'c')
        flag_c(ap);
    if (s[i] == 'p')
        i =flag_p(ap);
}

void print_1(char *s, va_list ap)
{
    int z = 0;
    int count = 0;
    int u = 1;
    

    if (s[i] == 's')
        flag_s(ap);
    if (s[i] == 'u')
        flag_u(ap);
    if (s[i] == 'b')
        flag_b(ap);
    if (s[i] == 'S')
        flag_ss(ap);
    if (s[i] == '%') {
        //printf("i = %i\n", i);
        //printf("z = %i\n", z);
        z = i;
        u = i;
        //printf("i = %i\n", i);
        //printf("z = %i\n", z);
        for (count; s[u] == '%'; count++) {
            u = u + 1;
        }
        //printf("%i\n", count/2);
        for (int y = 0; y != count/2; y++)
            my_putchar('%');
        i = i - 1;
        re = 1;
    }
}
 
void my_printf(char *s, ...)
{
    va_list ap;
    va_start(ap, s);

    for (i; s[i] != '\0'; i++) {
        if (s[i] == '%') {
            i++;
            print_1(s, ap);
            print_2(s, ap);
            
        } else {
            if (re == 1) {
                i = i - 1;
                re = 0;
            }
            my_putchar(s[i]);
        }
    }
}