##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## 
##

SRC	=	my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_put_octal.c	\
		my_put_insigned.c	\
		my_put_bin.c	\
		my_putstr_ascii.c	\
		my_put_hexa.c	\
		my_put_hexa_two.c	\
		my_put_hexa_adress.c	\
		flag_disp_1.c	\
		flag_disp_2.c	\
		my_printf.c	\
		main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy

all: $(NAME)

$(NAME):	$(OBJ)
	##@ar rc $(NAME) $(OBJ)
	gcc $(SRC)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)
	@rm -f ../$(NAME)

re:	fclean all
