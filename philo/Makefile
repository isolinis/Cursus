NAME = philo
FLAGS = -Wall -Wextra -Werror -pthread
SANITIZE = -g -fsanitize=address
VALGRIND = -g -Og -std=gnu99
INC = -I%.h -I$(LIB_DIR)%.h

SRC_NAME =	ft_philo_time.c	\
			ft_philo_utils.c	\
			ft_philo_actions.c	\
			ft_get_arguments.c	\
			philo.c	\

OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_DIR),$(OBJ_NAME))

LIB_DIR = ./Libft/
SRC_DIR = ./src/
OBJ_DIR = ./obj/

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIB_DIR) --silent
	@gcc $(FLAGS) -g -o $(NAME) $(OBJ) -L $(LIB_DIR) -lft
	@echo "##### philosophers compiling finished! #####"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@echo "##### Creating" [ $@ ] " #####"
	@gcc $(FLAGS) -g -o $@ -c $< $(INC)

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
