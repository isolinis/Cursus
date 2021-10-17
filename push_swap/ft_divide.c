#include <stdio.h>
#include "push_swap.h"

void	ft_divide(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		printf("Entrada %i: %s\n", i, argv[i]);
		i++;
	}
}
