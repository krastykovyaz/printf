# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/22 15:58:40 by lnoisome          #+#    #+#              #
#    Updated: 2020/04/22 20:57:38 by lnoisome         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

all: $(NAME)

$(NAME):
	@gcc -c -g ./*.c -I  ./*.h
	@ar -rc $(NAME) ./*.o
	@rm -rf ./*.o

clean:
	@rm -rf ./*.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

test:
	@gcc ./*.c -I ./*.h -o prog
	@./prog