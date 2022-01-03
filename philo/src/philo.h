#ifndef PHILO_H
# define PHILO_H

typedef struct s_data
{
	int	philosophers;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	eat_repeats;
}	t_data;

int	ft_get_arguments(t_data *args, int argc, char **argv);

#endif
