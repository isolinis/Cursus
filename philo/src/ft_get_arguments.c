#include "philo.h"
#include "../Libft/libft.h"

int	ft_check_arguments(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_get_arguments(t_data *args, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!ft_check_arguments(argv[i++]))
			return (0);
	}
	args->philosophers = ft_atoi(argv[1]);
	args->time_to_die = ft_atoi(argv[2]);
	args->time_to_eat = ft_atoi(argv[3]);
	args->time_to_sleep = ft_atoi(argv[4]);
	if (argc == 5)
		args->eat_repeats = 0;
	else
		args->eat_repeats = ft_atoi(argv[5]);
	return (1);
}
