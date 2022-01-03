#include "philo.h"
#include <stdio.h>
#include <pthread.h>

int	main(int argc, char **argv)
{
	t_data	args;

	if (argc != 5 && argc != 6)
	{
		printf("Incorrect number of args: %i. Enter 5 or 6, try again.\n", argc);
		return (1);
	}
	if (!ft_get_arguments(&args, argc, argv))
	{
		printf("Incorrect type of args. Arguments must be integers.\n");
		return (2);
	}
	printf("Philos: %i\n", args.philosophers);
	printf("Time to die: %i\n", args.time_to_die);
	printf("Time to eat: %i\n", args.time_to_eat);
	printf("Time to sleep: %i\n", args.time_to_sleep);
	printf("Eat repeats: %i\n", args.eat_repeats);
	return (0);
}
