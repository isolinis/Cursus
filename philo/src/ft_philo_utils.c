/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:55:22 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/17 19:49:54 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <stdio.h>

void	ft_print_message(t_philo *philo, int action)
{
	philo->time = ft_time_machine(philo->sit);
	if (action == 1)
	{
		printf("%s%i - %i has taken a fork\n",
			"\x1B[31m", philo->time, philo->tid);
		printf("%s%i - %i has taken a fork\n",
			"\x1B[31m", philo->time, philo->tid);
	}
	else if (action == 2)
	{
		philo->lm = philo->time;
		printf("%s%i - %i is eating\n", "\x1B[32m", philo->time, philo->tid);
		if (philo->dishes > 0)
			philo->dishes--;
	}
	else if (action == 3)
		printf("%s%i - %i is sleeping\n", "\x1B[36m", philo->time, philo->tid);
	else if (action == 4)
		printf("%s%i - %i is thinking\n", "\x1B[35m", philo->time, philo->tid);
	else if (action == 5)
		printf("%s%i - %i died\n", "\x1B[37m", philo->time, philo->tid);
}

int	ft_right_fork(t_philo *philo)
{
	int	right_fork;

	if (philo->tid == philo->diner->philos)
		right_fork = 1;
	else
		right_fork = philo->tid + 1;
	return (right_fork);
}
