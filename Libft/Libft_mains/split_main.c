#include <stdio.h>
#include "libft.h"

int	main (void)
{
	char	*s = "hola cara cola";
	char	c = ' ';
	for (unsigned long i = 0; i < sizeof(ft_split(s, c)) / sizeof(ft_split(s, c)[0]); i++)
	{
		printf("String %lu: %s\n",i,  ft_split(s, c)[i]);
	}
	return (0);
}
