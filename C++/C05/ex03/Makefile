NAME = Bureaucracy
CC = clang++
FLAGS = -Wall -Wextra -Werror
NINETYEIGHT = -std=c++98 -pedantic
SANITIZE = -g -fsanitize=address

SRC_NAME =	main.cpp \
			AForm.cpp \
			Bureaucrat.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \
			ShrubberyCreationForm.cpp \
			Intern.cpp \

INCLUDES =	Bureaucrat.hpp \
			AForm.hpp \
			PresidentialPardonForm.hpp \
			RobotomyRequestForm.hpp \
			ShrubberyCreationForm.hpp \
			Intern.hpp \

OBJ_NAME = $(SRC_NAME:.cpp=.o)
OBJ = $(addprefix $(OBJ_DIR),$(OBJ_NAME))

SRC_DIR = ./src/
OBJ_DIR = ./obj/

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "##### Bureaucracy compiling finished! #####"

$(OBJ_DIR)%.o: %.cpp $(INCLUDES)
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
