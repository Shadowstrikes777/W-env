TARGET		= fractol
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -g

OBJ_DIR		= ./bin/
INC_DIR		= ./Includes/
SRC_DIR		= ./Src/

LIBFT		= ./libft/
LIBMLX		= ./minilibx/

IFLAGS		= -I$(INC_DIR) -I$(LIBFT)Includes -I$(LIBMLX)
LFLAGS		= -L$(LIBFT) -lft -L$(LIBMLX) -lmlx_Linux -lm -lmlx -lXext -lX11 

INC		= m_basic.h utils.h fractol.h

SRC_FILES	= check_errors.c main.c \
				startmlx.c mlx_utils.c

SRCS		= $(addprefix $(SRC_DIR), $(SRC_FILES))
INCS		= $(addprefix $(INC_DIR), $(INC))
OBJS		= $(SRC_FILES:%.c=$(OBJ_DIR)%.o)

all: $(TARGET)

$(TARGET): $(OBJ_DIR) $(OBJS) $(INCS)
		@$(MAKE) -C $(LIBFT)
		@$(MAKE) -C $(LIBMLX)
		@$(CC) -o $@ $(OBJS) $(LFLAGS) $(CFLAGS)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INCS)
		@$(CC) -c $(IFLAGS) -o $@ $< #$(CFLAGS)

$(OBJ_DIR):
		@mkdir -p $(OBJ_DIR)

clean:
		@$(MAKE) -C $(LIBFT) clean
		@rm -rf $(OBJ_DIR)

fclean: clean
		@$(MAKE) -C $(LIBFT) fclean
		@$(MAKE) -C $(LIBMLX) clean
		@rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re $(OBJ_DIR)
