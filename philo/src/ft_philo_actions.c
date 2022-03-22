/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_actions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:03:22 by jsolinis          #+#    #+#             */
/*   Updated: 2022/03/21 19:54:43 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>

void	ft_start_routine(t_philo *philo)
{
	gettimeofday(&philo->sit, NULL);
	gettimeofday(&philo->lastdish, NULL);
	if (philo->tid % 2 == 0)
		ft_usleep_adjusted(philo, philo->diner->tteat);
	while (!philo->diner->leave)
	{
		ft_serve_dish(philo);
		if (philo->diner->leave || philo->dishes == 0)
			break ;
		ft_print_message(philo, "is sleeping");
		ft_usleep_adjusted(philo, philo->diner->ttsleep);
		if (philo->diner->leave)
			break ;
		ft_print_message(philo, "is thinking");
	}
}

void	ft_serve_dish(t_philo *philo)
{
	ft_take_fork(philo, philo->right_fork);
	ft_take_fork(philo, philo->left_fork);
	gettimeofday(&philo->lastdish, NULL);
	ft_print_message(philo, "is eating");
	ft_usleep_adjusted(philo, philo->diner->tteat);
	philo->diner->fork_taken[philo->right_fork] = 0;
	pthread_mutex_unlock(&philo->diner->fork[philo->right_fork]);
	philo->diner->fork_taken[philo->left_fork] = 0;
	pthread_mutex_unlock(&philo->diner->fork[philo->left_fork]);
}
