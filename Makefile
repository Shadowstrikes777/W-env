NAME        = fractol
CC          = cc
RM          = rm -f
RMDIR       = $(RM) -d
CFLAGS      = -Wall -Werror -Wextra -g

INC_DIR     = ./Includes/
SRC_DIR     = ./Sources/

LIBFT       = ./libft/
LIBMLX      = ./minilibx/

IFLAGS      = -I$(INC_DIR) -I$(LIBFT)Includes -I$(LIBMLX)
LFLAGS      = -lm -lmlx -lXext -lX11 -L$(LIBFT) -lft -L$(LIBMLX) -lmlx_Linux

INC_FILES   = mlx_basics.h \
              utils.h \
              fractol.h #TO DO

SRC_FILES   = main.c \
              check_errors.c 
              #start.c \ TO DO

OBJECTS     = $(SRC_FILES:.c=.o)

SOURCES     = $(addprefix $(SRC_DIR), $(SRC_FILES))
INCLUDES    = $(addprefix $(INC_DIR), $(INC_FILES))

all: $(NAME)

$(NAME): $(OBJECTS)
    make -C $(LIBFT)
    make -C $(LIBMLX)
    $(CC) -o $@ $(OBJECTS) $(LFLAGS)

$(SRC_DIR)%.o: $(SRC_DIR)%.c $(INCLUDES)
    $(CC) -c $(IFLAGS) $(CFLAGS) $< -o $@

clean:
    make -C $(LIBFT) clean
    make -C $(LIBMLX) clean
    $(RM) $(OBJECTS)

fclean: clean
    make -C $(LIBFT) fclean
    $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
