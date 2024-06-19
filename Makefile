NAME = fractol
CC = cc
RM = rm -f
RMDIR = $(RM) -d
CFLAGS = -Wall -Werror -Wextra -g
INCDIR = ./Includes/
SRCDIR = ./Sources/
LIBFTDIR = ./libft/
LIBMLX = ./minilibx/
IFLAGS = -I$(INC_DIR) -I$(LIBFT)Includes -I$(LIBMLX)
LFLAGS = -lm -lmlx -lXext -lX11 -L$(LIBFT) -lft -L$(LIBMLX) -lmlx_Linux
INC = #TO COMPLETE

all : $(NAME)

$(NAME) : $(OBJ_DIR) $(OBJ) $(INC) 
			MAKE -C $(LIBFT)
			MAKE -C $(LIBMLX)
clean :
			MAKE -C $(LIBFT) clean

fclean : clean
			MAKE -C $(LIBFT) fclean
			MAKE -C $(LIBMLX) fclean

re : fclean all

.PHONY: all clean fclean re