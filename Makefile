NAME = libftprintf.a

all: $(NAME)

$(NAME):
	@gcc ./*.c ./*.h
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