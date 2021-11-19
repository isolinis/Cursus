NAME = push_swap
FLAGS = -Wall -Wextra -Werror -Wno-pointer-to-int-cast -Wno-unused-result -Wno-return-local-addr
SANITIZE = -fsanitize=address -g3
VALGRIND = -g -Og -std=gnu99
INC = -I%.h -I$(LIB_DIR)%.h

SRC_NAME =	push_swap.c					\
			ft_map_argv.c				\
			ft_multi_arg.c				\
			ft_format_check.c			\
			ft_is_signed_digit.c		\
			ft_create_stack.c			\
			push_swap_utils.c			\
			push_swap_utils_together.c	\

OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_DIR),$(OBJ_NAME))

LIB_DIR = ../Libft/
SRC_DIR = ./src/
OBJ_DIR = ./obj/

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIB_DIR) --silent
	@make -C $(LIB_DIR) bonus --silent
	@gcc $(FLAGS) $(VALGRIND) -o $(NAME) $(OBJ) -L $(LIB_DIR) -lft
	@echo "##### push_swap compiling finished! #####"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@echo "##### Creating" [ $@ ] " #####"
	@gcc $(FLAGS) $(VALGRIND) -o $@ -c $< $(INC)

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
