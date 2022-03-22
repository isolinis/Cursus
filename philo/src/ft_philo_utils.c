/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:55:22 by jsolinis          #+#    #+#             */
/*   Updated: 2022/03/21 19:54:40 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <stdio.h>

void	ft_print_message(t_philo *philo, char *action)
{
	if (philo->diner->leave)
		return ;
	pthread_mutex_lock(&philo->diner->message);
	printf("%i %i %s\n", ft_set_time() - philo->diner->init, philo->tid, action);
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

void	ft_take_forks(t_philo *philo)
{
	if (philo->diner->philos == 1)
	{
		pthread_mutex_lock(&philo->diner->fork[philo->left_fork]);
		ft_print_message(philo, "has taken a fork");
		ft_usleep_adjusted(philo, philo->diner->ttdie + 10);
		return ;
	}
	pthread_mutex_lock(&philo->diner->fork[philo->left_fork]);
	pthread_mutex_lock(&philo->diner->fork[philo->right_fork]);
	ft_print_message(philo, "has taken a fork");
	ft_print_message(philo, "has taken a fork");
}
