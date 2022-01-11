/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:30:00 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/11 17:40:13 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <sys/time.h>

typedef struct s_data
{
	int				philos;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				eat_repeats;
	int				time;
	int				tid;
	int				alive;
	pthread_t		*thread;
	pthread_mutex_t	*fork;
	pthread_mutex_t	genesis;
	pthread_mutex_t	live;
}	t_data;

typedef struct s_philo
{
	int				tid;
	struct timeval	birthtimeval;
	struct timeval	lastmealval;
	t_data			*data;
}	t_philo;

int		ft_get_arguments(t_data *data, int argc, char **argv);
int		ft_collect_cutlery(t_philo *philo);
void	ft_lunch_time(t_philo *philo);
int		ft_thinking_corner(t_philo *philo);
int		ft_bed_time(t_philo *philo);
int		ft_time_to_die(t_philo *philo);
int		ft_is_alive(t_philo *philo);
int		ft_right_fork(t_philo *philo);
int		ft_time_machine(struct timeval *start, struct timeval *end);
int		ft_arg_check(int argc, char **argv, t_data *data);

#endif
