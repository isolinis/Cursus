/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:55:22 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/11 17:40:16 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <stdio.h>

int	ft_right_fork(t_philo *philo)
{
	int	right_fork;

	if (philo->tid == philo->data->philos)
		right_fork = 1;
	else
		right_fork = philo->tid + 1;
	return (right_fork);
}

int	ft_is_alive(t_philo *philo)
{
	struct timeval	current_timeval;
	int				time;
	int				lastmeal;

	gettimeofday(&current_timeval, NULL);
	time = ft_time_machine(&philo->birthtimeval, &current_timeval);
	gettimeofday(&current_timeval, NULL);
	lastmeal = ft_time_machine(&philo->lastmealval, &current_timeval);
	if (lastmeal >= philo->data->time_to_die)
	{
		printf("%s%i - %i died\n", "\x1B[33m", time, philo->tid);
		return (ft_time_to_die(philo));
	}
	pthread_mutex_unlock(&philo->data->live);
	return (1);
}
