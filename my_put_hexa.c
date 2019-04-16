/*
** EPITECH PROJECT, 2018
** my put number
** File description:
** display number give on parameter
*/
int my_put_hexa(int nb);
void my_putchar(char c);

int nb_special_hexa(long nb)
{
    my_put_hexa(nb / 16);
    my_put_hexa(nb % 16);
}

void print_hex(int nb)
{
    if (nb <= 9)
        my_putchar(nb + 48);
    else if (nb == 10)
        my_putchar('A');
    else if (nb == 11)
        my_putchar('B');
    else if (nb == 12)
        my_putchar('C');
    else if (nb == 13)
        my_putchar('D');
    else if (nb == 14)
        my_putchar('E');
    else if (nb == 15)
        my_putchar('F');
    else {
        nb_special_hexa(nb);
    }
}

int my_put_hexa(int nb)
{
    int special = 0;
    if (nb == -2147483648) {
        special = 1;
        nb = -214748364;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    print_hex(nb);
    if (special == 1) {
        my_putchar(56);
    }
}