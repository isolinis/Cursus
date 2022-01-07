#ifndef PHILO_H
# define PHILO_H

#include <pthread.h>

typedef struct s_data
{
	int				philos;
	int				forks;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				eat_repeats;
	int				tid;
	pthread_mutex_t	genesis;
}	t_data;

typedef struct s_philo
{
	int		tid;
	t_data	*data;
}	t_philo;

int	ft_get_arguments(t_data *data, int argc, char **argv);
int	ft_arg_check(int argc, char **argv, t_data *data);

#endif
