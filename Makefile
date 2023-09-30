EXE = fractol
CFLAGS = -Wall -Wextra -Werror -O2
LFLAGS = -lm -framework OpenGL -framework AppKit -g -fsanitize=address
SRC =  main.c \
	ft_atod.c \
	ft_julia.c \
	ft_mandelbrot.c \
	ft_deal_arg.c
	
OBJ = $(SRC:.c=.o)
AR = ar -rc
LIB4 = fractol.a
LIB = minilibx_opengl_20191021/libmlx.a \
	printf/libftprintf.a \
	libft/libft.a


all: $(EXE)

$(EXE): $(LIB) $(LIB4)
	$(CC) $(CFLAGS) $(LFLAGS) $^ -o $@

$(LIB4): $(OBJ)
	$(AR) $(LIB4) $(OBJ)

$(LIB):
	make -C minilibx_opengl_20191021
	make -C printf
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