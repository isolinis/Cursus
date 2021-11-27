NAME = push_swap
FLAGS = -Wall -Wextra -Werror
SANITIZE = -fsanitize=address -g3
VALGRIND = -g -Og -std=gnu99
INC = -I%.h -I$(LIB_DIR)%.h

SRC_NAME =	ft_bit_a_bit.c				\
			ft_commands_a.c				\
			ft_commands_b.c				\
			ft_radix_sort.c				\
			ft_sort_big.c				\
			ft_sortof_five.c			\
			ft_sortof_five_utils.c		\
			ft_sortof_three.c			\
			ps_order_utils.c			\
			push_swap.c					\
			ft_map_argv.c				\
			ft_multi_arg.c				\
			ft_format_check.c			\
			ft_is_signed_digit.c		\
			ft_create_stack.c			\
			push_swap_utils.c			\
			push_swap_utils_together.c	\

OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_DIR),$(OBJ_NAME))

LIB_DIR = ./Libft/
SRC_DIR = ./src/
OBJ_DIR = ./obj/

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIB_DIR) --silent
	@make -C $(LIB_DIR) bonus --silent
	@gcc $(FLAGS) $(SANITIZE) -o $(NAME) $(OBJ) -L $(LIB_DIR) -lft
	@echo "##### push_swap compiling finished! #####"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@echo "##### Creating" [ $@ ] " #####"
	@gcc $(FLAGS) $(SANITIZE) -o $@ -c $< $(INC)

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
