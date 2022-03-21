/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_time.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:00:43 by jsolinis          #+#    #+#             */
/*   Updated: 2022/03/21 19:39:29 by jsolinis         ###   ########.fr       */
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
	if (!philo->lm)
		philo->lm = ft_time_machine(philo->lastdish);
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
		ft_print_message(philo, "died");
		philo->diner->leave = 1;
		pthread_mutex_unlock(&philo->diner->go);
		usleep(100);
	}
	return (ret);
}

void	ft_usleep_adjusted(t_philo *philo, int end)
{
	struct timeval	time;

	if (ft_time_to_leave(philo))
		return ;
	gettimeofday(&time, NULL);
	while (ft_time_machine(time) < end)
		usleep(100);
	if (ft_time_to_leave(philo))
		return ;
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
