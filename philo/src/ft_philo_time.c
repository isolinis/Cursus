/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_time.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:00:43 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/18 19:57:02 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>

int	ft_time_to_leave(t_philo *philo)
{
	int	now;
	int	ret;

	now = ft_time_machine(philo->sit);
	ret = 0;
	pthread_mutex_lock(&philo->diner->go);
	if (philo->diner->leave)
	{
		pthread_mutex_unlock(&philo->diner->go);
		return (1);
	}
	pthread_mutex_unlock(&philo->diner->go);
	if (now - philo->lm >= philo->diner->ttdie)
	{
		ret = 1;
		pthread_mutex_lock(&philo->diner->go);
		pthread_mutex_lock(&philo->diner->message);
		ft_print_message(philo, 5);
		pthread_mutex_unlock(&philo->diner->message);
		philo->diner->leave = 1;
		pthread_mutex_unlock(&philo->diner->go);
		usleep(1000);
	}
	return (ret);
}

void	ft_usleep_adjusted(t_philo *philo, struct timeval start, int end)
{
	int				time;

	time = ft_time_machine(start);
	end += time;
	while (time < end)
	{
		usleep(1000);
		if (ft_time_to_leave(philo))
			break ;
		time = ft_time_machine(start);
	}
}

int	ft_time_machine(struct timeval start)
{
	struct timeval	current;
	int				time;

	gettimeofday(&current, NULL);
	time = (((current.tv_sec - start.tv_sec) * 1000)
			+ ((current.tv_usec - start.tv_usec) / 1000));
	return (time);
}
