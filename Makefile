CC     = gcc
CFLAGS = -Wall -Wextra -Werror
LFLAGS = -Lmlx -lmlx -framework OpenGL -framework AppKit
SRC =  main.c
OBJ = $(SRC:.c=.o)
DIR = minilibx_opengl_20191021
RM = rm -f
AR = ar -rc
NAME = fractol.a
LIB = minilibx_opengl_20191021/libmlx.a
EXE = exe


all: $(NAME) $(EXE)

$(EXE): $(NAME) 
	$(CC) $(CFLAGS) $(LFLAGS) $(SRC) $< -o $@

$(NAME): $(LIB) $(OBJ)
	$(AR) $(NAME) $(LIB) $(OBJ) 

$(LIB):
	make -C $(DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C $(DIR) clean
	$(RM) $(OBJ) 

fclean: clean
	$(RM) $(NAME) $(EXE)

re: fclean all

.PHONY: all clean fclean re