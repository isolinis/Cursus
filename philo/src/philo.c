/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:45:12 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/28 17:27:02 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_sit_up(void *params)
{
	t_philo	philo;
	t_diner *diner;

	diner = (t_diner *) params;
	philo = (t_philo){.tid = diner->tid, .time = 0,
		.lm = 0, .dishes = diner->eat_nbr, .diner = diner};
	gettimeofday(&philo.sit, NULL);
	gettimeofday(&philo.lastdish, NULL);
	pthread_mutex_unlock(&philo.diner->identify);
	ft_start_routine(&philo);
	return (NULL);
}

void	ft_philo_meet(t_diner *diner)
{
	int	i;

	i = 0;
	while (i < diner->philos)
	{
		pthread_mutex_lock(&diner->identify);
		diner->tid = i + 1;
		if (pthread_create(&diner->thread[i++],
				NULL, ft_sit_up, (void *) diner) != 0)
		{
			printf("Error creating the thread: %i\n", diner->tid);
			break ;
		}
	}
}

void	ft_philo_leave(t_diner *diner)
{
	int	i;

	i = 0;
	while (i < diner->philos)
	{
		pthread_join(diner->thread[i], NULL);
		pthread_mutex_destroy(&diner->fork[i + 1]);
		i++;
	}
	pthread_mutex_destroy(&diner->message);
	pthread_mutex_destroy(&diner->identify);
	free(diner->fork_taken);
	free(diner->fork);
	free(diner->thread);
}

void	ft_mise_en_place(t_diner *diner)
{
	int	i;

	i = 0;
	diner->leave = 0;
	diner->thread = malloc (diner->philos * sizeof(pthread_t));
	diner->fork_taken = (int *) malloc (diner->philos * sizeof(int));
	diner->fork = (pthread_mutex_t *) malloc (diner->philos * sizeof(pthread_mutex_t));
	while (i < diner->philos)
	{
		pthread_mutex_init(&diner->fork[i], NULL);
		diner->fork_taken[i] = 0;
		i++;
	}
	pthread_mutex_init(&diner->go, NULL);
	pthread_mutex_init(&diner->message, NULL);
	pthread_mutex_init(&diner->identify, NULL);
}

int	main(int argc, char **argv)
{
	t_diner	diner;

	memset(&diner, 0, sizeof(t_diner));
	if (!ft_arg_check(argc, argv, &diner))
		return (1);
	ft_mise_en_place(&diner);
	ft_philo_meet(&diner);
	ft_philo_leave(&diner);
	return (0);
}
