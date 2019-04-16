/*
** EPITECH PROJECT, 2018
** my put number
** File description:
** display number give on parameter
*/
int my_put_octal(int nb);
void my_putchar(char c);

int nb_special_octal(long nb)
{
    my_put_octal(nb / 8);
    my_put_octal(nb % 8);
}

int my_put_octal(int nb)
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
    if (nb <= 9) {
        my_putchar(nb + 48);
    } else {
        nb_special_octal(nb);
    }
    if (special == 1) {
        my_putchar(56);
    }
}
