NAME		= fractol
CC			= cc
RM			= rm -f
RMDIR		= $(RM) -d
CFLAGS		= -Wall -Werror -Wextra -g
INCDIR		= ./Includes/
SRCDIR		= ./Sources/
LIBFT		= ./libft/
LIBMLX		= ./minilibx/
IFLAGS		= -I$(INC_DIR) -I$(LIBFT)Includes -I$(LIBMLX)
LFLAGS		= -lm -lmlx -lXext -lX11 -L$(LIBFT) -lft -L$(LIBMLX) -lmlx_Linux
INC_FILES	= mlx_basics.h \
				utils.h \
				fractol.h #TO DO
SRC_FILES	= start.c \
				main.c \
				check_errors.c 
SOURCES		= $(addprefix $(SRC_DIR), $(SRCS_FILES))
INCLUDES	= $(addprefix $(INC_DIR), $(INC_FILES))

all : $(NAME)

$(NAME) : $(OBJ_DIR) $(OBJ) $(INC) 
			make -C $(LIBFT)
			make -C $(LIBMLX)
clean :
			make -C $(LIBFT) clean
			make -C $(LIBMLX) clean

fclean : clean
			make -C $(LIBFT) fclean

re : fclean all

.PHONY: all clean fclean re