NAME = push_swap
FLAGS = -Wall -Wextra -Werror
SANITIZE = -fsanitize=address -g3
INC = -I%.h -I$(LIB_DIR)%.h

SRC_NAME =	push_swap.c				\
			ft_map_argv.c			\
			ft_format_check.c		\
			ft_is_signed_digit.c	\

OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_DIR),$(OBJ_NAME))

LIB_DIR = ../Libft/
SRC_DIR = ./src/
OBJ_DIR = ./obj/

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIB_DIR) --silent
	@gcc $(FLAGS) -o $(NAME) $(OBJ) -L $(LIB_DIR) -lft
	@echo "##### push_swap compiling finished! #####"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@echo "##### Creating" [ $@ ] " #####"
	@gcc $(FLAGS) -o $@ -c $< $(INC)

clean:
	@make -C $(LIB_DIR) clean  --silent
	@rm -f $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo "##### Removed object files #####"

fclean: clean
	@make -C $(LIB_DIR) fclean  --silent
	@rm -f $(NAME)
	@echo "##### Removed binary files #####"

re: fclean all

.PHONY: all clean fclean re
