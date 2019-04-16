/*
** EPITECH PROJECT, 2018
** swap
** File description:
** swap to integer
*/
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_octal(int nb);

int my_putstr_ascii(char const *str)
{
    for (int i =0; str[i] != '\0';) {
        if (str[i] <= 127 && str[i] >= 32) {
            my_putchar(str[i]);
            i = i + 1;
        }
        if (str[i] >= 0 && str[i] <= 9) {
            my_putstr("\\00");
            my_put_octal(str[i]);
            i = i + 1;
        }
        if (str[i] >= 10 && str[i] <= 31) {
            my_putstr("\\0");
            my_put_octal(str[i]);
            i = i + 1;
        }
        if (str[i] == 127) {
            my_putstr("\\");
            my_put_octal(str[i]);
        }
    }
}

