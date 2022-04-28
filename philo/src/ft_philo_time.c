/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_time.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:00:43 by jsolinis          #+#    #+#             */
/*   Updated: 2022/03/22 18:36:55 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>

int	ft_time_to_leave(t_philo *philo)
{
	pthread_mutex_lock(&philo->diner->go);
	if (philo->diner->leave)
	{
		pthread_mutex_unlock(&philo->diner->go);
		return (1);
	}
	pthread_mutex_unlock(&philo->diner->go);
	if (ft_set_time() - philo->lm >= philo->diner->ttdie)
	{
		pthread_mutex_lock(&philo->diner->go);
		ft_print_message(philo, "died");
		philo->diner->leave = 1;
		pthread_mutex_unlock(&philo->diner->go);
		usleep(100);
	}
	return (philo->diner->leave);
}

void	ft_usleep_adjusted(t_philo *philo, int end)
{
	int	time;

	time = ft_set_time();
	while (ft_set_time() - time < end)
	{
		usleep(100);
		if (ft_time_to_leave(philo))
			break ;
	}
}

int	ft_set_time(void)
{
	struct timeval	current;
	int				now;

	gettimeofday(&current, NULL);
	now = current.tv_sec * 1000 + current.tv_usec / 1000;
	return (now);
}
