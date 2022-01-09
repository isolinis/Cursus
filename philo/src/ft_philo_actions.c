/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_actions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:03:22 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/09 16:14:14 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>

void	ft_thinking_corner(t_philo *philo)
{
	struct timeval	current_timeval;
	int				time;

	gettimeofday(&current_timeval, NULL);
	time = ft_time_machine(&philo->birthtimeval, &current_timeval);
	printf("%s%i - %i is thinking\n", "\x1B[35m", time, philo->tid);
	usleep(5000);
	ft_collect_cutlery(philo);
}

void	ft_bed_time(t_philo *philo)
{
	struct timeval	current_timeval;
	int				time;

	gettimeofday(&current_timeval, NULL);
	time = ft_time_machine(&philo->birthtimeval, &current_timeval);
	printf("%s%i - %i is sleeping\n", "\x1B[36m", time, philo->tid);
	usleep(philo->data->time_to_sleep);
	ft_thinking_corner(philo);
}

void	ft_collect_cutlery(t_philo *philo)
{
	struct timeval	current_timeval;
	int				time;
	int				right_fork;

	if (philo->tid == philo->data->philos)
		right_fork = 1;
	else
		right_fork = philo->tid + 1;
	pthread_mutex_lock(&philo->data->fork[right_fork]);
	gettimeofday(&current_timeval, NULL);
	time = ft_time_machine(&philo->birthtimeval, &current_timeval);
	printf("%s%i - %i has taken a fork\n", "\x1B[31m", time, philo->tid);
	pthread_mutex_lock(&philo->data->fork[philo->tid]);
	gettimeofday(&current_timeval, NULL);
	time = ft_time_machine(&philo->birthtimeval, &current_timeval);
	printf("%s%i - %i has taken a fork\n","\x1B[31m", time, philo->tid);
	ft_lunch_time(philo);
	pthread_mutex_unlock(&philo->data->fork[philo->tid]);
	pthread_mutex_unlock(&philo->data->fork[right_fork]);
	ft_bed_time(philo);
}

void	ft_lunch_time(t_philo *philo)
{
	struct timeval	current_timeval;
	int				time;

	gettimeofday(&current_timeval, NULL);
	time = ft_time_machine(&philo->birthtimeval, &current_timeval);
	printf("%s%i - %i is eating\n", "\x1B[32m", time, philo->tid);
	usleep(philo->data->time_to_eat);
}
