CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = ft_flag.c \
	ft_printf.c \
	ft_put_char.c \
	ft_put_nbr.c \
	ft_put_str.c \
	ft_put_hexs.c \
	ft_put_hexl.c \
	ft_put_unsint.c \
	ft_put_address.c

AR = ar -rc
RM = rm -f
OBJ = $(SRC:.c=.o)


all:$(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)

re:fclean all

.PHONY: all clean fclean re