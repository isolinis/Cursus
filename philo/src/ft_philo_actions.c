/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_actions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:03:22 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/11 17:40:10 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int	ft_time_to_die(t_philo *philo)
{
	philo->data->alive = 0;
	return (0);
}

int	ft_thinking_corner(t_philo *philo)
{
	struct timeval	current_timeval;
	int				time;

	gettimeofday(&current_timeval, NULL);
	time = ft_time_machine(&philo->birthtimeval, &current_timeval);
	if (!philo->data->alive)
		return (ft_time_to_die(philo));
	if (!ft_is_alive(philo))
		return (0);
	printf("%s%i - %i is thinking\n", "\x1B[35m", time, philo->tid);
	usleep((philo->data->time_to_eat * 1000));
	ft_collect_cutlery(philo);
	return (1);
}

int	ft_bed_time(t_philo *philo)
{
	struct timeval	current_timeval;
	int				time;

	gettimeofday(&current_timeval, NULL);
	time = ft_time_machine(&philo->birthtimeval, &current_timeval);
	if (!philo->data->alive)
		return (ft_time_to_die(philo));
	if (!ft_is_alive(philo))
		return (0);
	printf("%s%i - %i is sleeping\n", "\x1B[36m", time, philo->tid);
	usleep(philo->data->time_to_sleep * 1000);
	ft_thinking_corner(philo);
	return (1);
}

int	ft_collect_cutlery(t_philo *philo)
{
	struct timeval	current_timeval;
	int				time;
	int				right_fork;

	right_fork = ft_right_fork(philo);
	pthread_mutex_lock(&philo->data->fork[right_fork]);
	gettimeofday(&current_timeval, NULL);
	time = ft_time_machine(&philo->birthtimeval, &current_timeval);
	pthread_mutex_lock(&philo->data->live);
	if (!philo->data->alive)
		return (ft_time_to_die(philo));
	printf("%s%i - %i has taken a fork\n", "\x1B[31m", time, philo->tid);
	pthread_mutex_lock(&philo->data->fork[philo->tid]);
	gettimeofday(&current_timeval, NULL);
	time = ft_time_machine(&philo->birthtimeval, &current_timeval);
	printf("%s%i - %i has taken a fork\n", "\x1B[31m", time, philo->tid);
	if (!ft_is_alive(philo))
		return (0);
	ft_lunch_time(philo);
	pthread_mutex_unlock(&philo->data->fork[philo->tid]);
	pthread_mutex_unlock(&philo->data->fork[right_fork]);
	ft_bed_time(philo);
	return (1);
}

void	ft_lunch_time(t_philo *philo)
{
	struct timeval	current_timeval;
	int				time;

	gettimeofday(&current_timeval, NULL);
	time = ft_time_machine(&philo->birthtimeval, &current_timeval);
	printf("%s%i - %i is eating\n", "\x1B[32m", time, philo->tid);
	usleep(philo->data->time_to_eat * 1000);
	gettimeofday(&philo->lastmealval, NULL);
}
