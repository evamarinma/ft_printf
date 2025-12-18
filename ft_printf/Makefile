CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_get_address.c ft_low_hex.c ft_printf.c ft_putchar.c ft_putnbr_u.c \
	ft_putnbr.c ft_putstr.c ft_up_hex.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(NAME)


$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re