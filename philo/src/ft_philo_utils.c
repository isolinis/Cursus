/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:55:22 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/19 19:10:00 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <stdio.h>

void	ft_print_message(t_philo *philo, int action)
{
	pthread_mutex_lock(&philo->diner->message);
	philo->time = ft_time_machine(philo->sit);
	if (action == 1)
		printf("%i %i has taken a fork\n", philo->time, philo->tid);
	else if (action == 2)
	{
		philo->lm = philo->time;
		printf("%i %i is eating\n", philo->time, philo->tid);
		if (philo->dishes > 0)
			philo->dishes--;
	}
	else if (action == 3)
		printf("%i %i is sleeping\n", philo->time, philo->tid);
	else if (action == 4)
		printf("%i %i is thinking\n", philo->time, philo->tid);
	else if (action == 5)
		printf("%i %i died\n", philo->time, philo->tid);
	pthread_mutex_unlock(&philo->diner->message);
}

int	ft_right_fork(t_philo *philo)
{
	int	right_fork;

	if (philo->tid == philo->diner->philos)
		right_fork = 0;
	else
		right_fork = philo->tid;
	return (right_fork);
}

void	ft_take_fork(t_philo *philo, int fork)
{
	while (philo->diner->fork_taken[fork])
	{
		gettimeofday(&philo->current, NULL);
		ft_usleep_adjusted(philo, philo->current, 1);
	}
	pthread_mutex_lock(&philo->diner->fork[fork]);
	philo->diner->fork_taken[fork] = 1;
}
