# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/22 15:58:40 by lnoisome          #+#    #+#              #
#    Updated: 2020/05/22 20:39:11 by lnoisome         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	afterdot.c \
		convert.c \
		convert_hex.c \
		convertf.c \
		convertf2.c \
		decimal_pregular_space.c \
		flag.c \
		float_minus.c \
		float_plus.c \
		float_space.c \
		float_zero.c \
		free_list.c \
		ft_atoi.c \
		ft_float.c \
		ft_itoa.c \
		ft_itoa2.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putnchar.c \
		ft_putnstr.c \
		ft_putstr.c \
		ft_round.c \
		ft_strlen.c \
		if_digit.c \
		percent.c \
		precision.c \
		search_type.c \
		size.c \
		type_decimal_minus.c \
		type_decimal_plus.c \
		type_decimal_regular.c \
		type_decimal_size.c \
		type_decimal_space.c \
		type_decimal_zero.c \
		type_float_priority.c \
		type_float_size.c \
		type_hex_minus.c \
		type_hex_regular.c \
		type_hex_size.c \
		type_octal_minus.c \
		type_octal_regular.c \
		type_octal_size.c \
		type_octal_zero.c \
		type_priority_octal.c \
		type_str.c \
		width.c \
		type_address.c \
		type_perc.c \
		errors.c \
		ft_equal.c \
		colors.c \
		append.c \
		ft_strdup.c \
		uns.c \
		uns2.c \
		uns3.c \
		uns4.c

OBJ = $(patsubst %.c, %.o, $(SRC))
D_FILE = $(patsubst %.c, %.d, $(SRC))
HEADER = includes/

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc -Wall -Wextra -Werror -c $< -o $@ -I $(HEADER) -MD

clean:
	@rm -rf $(OBJ) $(D_FILE)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

include $(wildcard $(D_FILE))

.PHONY: all clean fclean re
