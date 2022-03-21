/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_actions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:03:22 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/28 16:32:31 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <stdio.h>
#include <unistd.h>

void	ft_start_routine(t_philo *philo)
{
	if (philo->tid % 2 == 0)
		ft_usleep_adjusted(philo, philo->current, philo->diner->tteat);
	while (!philo->diner->leave)
	{
		ft_serve_dish(philo);
		if (philo->diner->leave || philo->dishes == 0)
			break ;
		ft_bed_time(philo);
		if (philo->diner->leave)
			break ;
		ft_thinking_corner(philo);
	}
}

void	ft_thinking_corner(t_philo *philo)
{
	ft_print_message(philo, 4);
}

void	ft_bed_time(t_philo *philo)
{
	struct timeval	current;

	ft_print_message(philo, 3);
	gettimeofday(&current, NULL);
	ft_usleep_adjusted(philo, current, philo->diner->ttsleep);
}

void	ft_serve_dish(t_philo *philo)
{
	int				right_fork;

	right_fork = ft_right_fork(philo);
	//ft_take_fork(philo, right_fork);
	while (philo->diner->fork_taken[right_fork] && philo->diner->fork_taken[philo->tid - 1])
	{
		gettimeofday(&philo->current, NULL);
		ft_usleep_adjusted(philo, philo->current, 1);
	}
	usleep(1000);
	pthread_mutex_lock(&philo->diner->fork[right_fork]);
	pthread_mutex_lock(&philo->diner->fork[philo->tid - 1]);
	philo->diner->fork_taken[right_fork] = 1;
	philo->diner->fork_taken[philo->tid - 1] = 1;
	ft_print_message(philo, 1);
	//ft_take_fork(philo, philo->tid - 1);
	ft_print_message(philo, 1);
	ft_print_message(philo, 2);
	//gettimeofday(&philo->lastdish, NULL);
	ft_usleep_adjusted(philo, philo->lastdish, philo->diner->tteat);
	philo->diner->fork_taken[philo->tid - 1] = 0;
	philo->diner->fork_taken[right_fork] = 0;
	pthread_mutex_unlock(&philo->diner->fork[philo->tid - 1]);
	pthread_mutex_unlock(&philo->diner->fork[right_fork]);
}
