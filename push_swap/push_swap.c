#include <unistd.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "Error\n", 8);
	if (argc == 2)
		ft_format(argv[1]);
	if (argc > 2)
		ft_divide(argv);
	return (0);
}
