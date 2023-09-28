CC     = gcc
CFLAGS = -Wall -Wextra -Werror -O2
LFLAGS = -lm -framework OpenGL -framework AppKit -g -fsanitize=address
SRC =  main.c \
	ft_atod.c \
	ft_julia.c \
	ft_mandelbrot.c \
	ft_deal_arg.c
	
OBJ = $(SRC:.c=.o)
DIR = minilibx_opengl_20191021
RM = rm -f
AR = ar -rc
LIB4 = fractol.a
LIB1 = minilibx_opengl_20191021/libmlx.a
LIB2 = printf/libftprintf.a
LIB3 = libft/libft.a
EXE = fractol


all: $(LIB4) $(EXE)

$(EXE): $(LIB1) $(LIB2) $(LIB3) $(LIB4)
	$(CC) $(CFLAGS) $(LFLAGS) $(SRC) $(LIB1) $(LIB2) $(LIB3) $(LIB4) -o $@

$(LIB4): $(OBJ)
	$(AR) $(LIB4) $(OBJ)

$(LIB1):
	make -C $(DIR)
$(LIB2):
	make -C printf
$(LIB3):
	make -C libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C minilibx_opengl_20191021 clean
	make -C libft clean
	make -C printf clean
	$(RM) $(OBJ) 

fclean: clean
	$(RM) $(LIB4) $(EXE)
	make -C minilibx_opengl_20191021 clean
	make -C libft fclean
	make -C printf fclean

re: fclean all

.PHONY: all clean fclean re