TARGET	= a.out
CC		= cc
CFLAGS	= -Wall -Werror -Wextra -g3

OBJ_DIR = ./bin/
INC_DIR = ./inc/
SRC_DIR = ./src/

LIBFT	= ./libft/
IFLAGS	= -I$(INC_DIR) -I$(LIBFT)Includes
LFLAGS	= -L$(LIBFT) -lft
INC		= header.h
SRC_FILES	= main.c
SRCS		= $(addprefix $(SRC_DIR), $(SRC_FILES))
INCS		= $(addprefix $(INC_DIR), $(INC))
OBJS		= $(SRC_FILES:%.c=$(OBJ_DIR)%.o)
all: $(TARGET)

$(TARGET): $(OBJ_DIR) $(OBJS) $(INCS)
			@$(MAKE) -C $(LIBFT) --no-print-directory
			$(CC) $(CFLAGS) $(OBJS) $(LFLAGS) $(IFLAGS) -o $@

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INCS)
			$(CC) -c $(CFLAGS) -I./inc -I$(LIBFT)inc $(LFLAGS) -o $@ $<

$(OBJ_DIR):
			mkdir -p $(OBJ_DIR)

clean:
			$(MAKE) -C $(LIBFT) clean
			rm -rf $(OBJ_DIR)

fclean: clean
			$(MAKE) -C $(LIBFT) fclean
			rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re $(OBJ_DIR)