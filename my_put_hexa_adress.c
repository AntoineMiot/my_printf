/*
** EPITECH PROJECT, 2018
** my put number
** File description:
** display number give on parameter
*/
int my_put_hexa_adress(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int tour = 0;

int nb_special_hexa_adress(long nb)
{
    tour = 1;
    my_put_hexa_adress(nb / 16);
    my_put_hexa_adress(nb % 16);
}

void print_hexa(int nb)
{
    if (nb <= 9)
        my_putchar(nb + 48);
    else if (nb == 10)
        my_putchar('a');
    else if (nb == 11)
        my_putchar('b');
    else if (nb == 12)
        my_putchar('c');
    else if (nb == 13)
        my_putchar('d');
    else if (nb == 14)
        my_putchar('e');
    else if (nb == 15)
        my_putchar('f');
    else {
        nb_special_hexa_adress(nb);
    }
}

int my_put_hexa_adress(int nb)
{
    int special = 0;

    if (tour == 0)
        my_putstr("0x");
    if (nb == -2147483648) {
        special = 1;
        nb = -214748364;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    print_hexa(nb);
    if (special == 1) {
        my_putchar(56);
    }
}