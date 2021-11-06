SRCS =	ft_printf.c		\
		ft_convert.c	\
		ft_putchar.c	\
		ft_puthex.c		\
		ft_putnbr.c		\
		ft_paint_nbr.c	\
		ft_cntnbr.c		\
		ft_putnbr_u.c	\
		ft_putptr.c		\
		ft_putstr.c		\

NAME = libftprintf.a

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

CC = clang

CC_FLAGS = -Wall -Wextra -Werror

$(OBJS_DIR)%.o : %.c ft_printf.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@clang $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_PREFIXED)
	@echo "Printf Done!"

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
