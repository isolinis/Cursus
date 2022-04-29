NAME = hi_this_is_brain 
CC = clang++
FLAGS = -Wall -Wextra -Werror
NINETYEIGHT = -std=c++98 -pedantic
SANITIZE = -g -fsanitize=address

SRC_NAME =	main.cpp \

OBJ_NAME = $(SRC_NAME:.cpp=.o)
OBJ = $(addprefix $(OBJ_DIR),$(OBJ_NAME))

OBJ_DIR = ./obj/

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "##### hi_this_is_brain compiling finished! #####"

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@echo "##### Creating" [ $@ ] " #####"
	$(CC) $(FLAGS) -c $< -I. -o $@

clean:
	@rm -f $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo "##### Removed object files #####"

fclean: clean
	@rm -f $(NAME)
	@echo "##### Removed binary files #####"

re: fclean all

.PHONY: all clean fclean re
