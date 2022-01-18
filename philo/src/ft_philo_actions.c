/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_actions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:03:22 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/18 19:55:17 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <stdio.h>

void	ft_thinking_corner(t_philo *philo)
{
	if (philo->diner->leave)
		return ;
	pthread_mutex_lock(&philo->diner->message);
	ft_print_message(philo, 4);
	pthread_mutex_unlock(&philo->diner->message);
	ft_usleep_adjusted(philo, philo->current, philo->diner->tteat);
}

void	ft_bed_time(t_philo *philo)
{
	struct timeval	current;

	pthread_mutex_lock(&philo->diner->message);
	ft_print_message(philo, 3);
	pthread_mutex_unlock(&philo->diner->message);
	gettimeofday(&current, NULL);
	ft_usleep_adjusted(philo, current, philo->diner->ttsleep);
}

void	ft_serve_dish(t_philo *philo)
{
	int				right_fork;

	gettimeofday(&philo->current, NULL);
	right_fork = ft_right_fork(philo);
	if (philo->diner->leave)
		return ;
	pthread_mutex_lock(&philo->diner->fork[right_fork]);
	pthread_mutex_lock(&philo->diner->fork[philo->tid]);
	if (philo->diner->leave)
		return ;
	pthread_mutex_lock(&philo->diner->message);
	ft_print_message(philo, 1);
	ft_print_message(philo, 2);
	pthread_mutex_unlock(&philo->diner->message);
	gettimeofday(&philo->lastdish, NULL);
	ft_usleep_adjusted(philo, philo->lastdish, philo->diner->tteat);
	pthread_mutex_unlock(&philo->diner->fork[philo->tid]);
	pthread_mutex_unlock(&philo->diner->fork[right_fork]);
}
