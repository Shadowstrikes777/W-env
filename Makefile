NAME = fractol
CC = cc
RM = rm -f
RMDIR = $(RM) -d
CFLAGS = -Wall -Werror -Wextra -g
INCDIR = ./Includes/
SRCDIR = ./Sources/
LIBFT = ./libft/
LIBMLX = ./minilibx/
IFLAGS = -I$(INC_DIR) -I$(LIBFT)Includes -I$(LIBMLX)
LFLAGS = -lm -lmlx -lXext -lX11 -L$(LIBFT) -lft -L$(LIBMLX) -lmlx_Linux
INC = #TO COMPLETE

all : $(NAME)

$(NAME) : $(OBJ_DIR) $(OBJ) $(INC) 
			make -C $(LIBFT)
			make -C $(LIBMLX)
clean :
			make -C $(LIBFT) clean

fclean : clean
			make -C $(LIBFT) fclean
			make -C $(LIBMLX) fclean

re : fclean all

.PHONY: all clean fclean re