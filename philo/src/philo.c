/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:45:12 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/11 16:59:42 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include "../Libft/libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int	ft_time_machine(struct timeval *start, struct timeval *end)
{
	return (((end->tv_sec - start->tv_sec) * 1000)
		+ ((end->tv_usec - start->tv_usec) / 1000));
}

void	*ft_wait_room(void *params)
{
	t_philo	philo;
	t_data	*data;

	data = params;
	philo = (t_philo){.tid = data->tid, .data = data};
	pthread_mutex_init(&philo.data->fork[philo.tid], NULL);
	gettimeofday(&philo.birthtimeval, NULL);
	gettimeofday(&philo.lastmealval, NULL);
	pthread_mutex_unlock(&data->genesis);
	if (philo.tid % 2 != 0)
		ft_collect_cutlery(&philo);
	ft_thinking_corner(&philo);
	return (NULL);
}

void	ft_philo_genesis(t_data *data)
{
	int	i;

	i = 0;
	data->thread = malloc (data->philos * sizeof(pthread_t));
	data->fork = malloc (data->philos * sizeof(pthread_mutex_t));
	data->alive = 1;
	pthread_mutex_init(&data->genesis, NULL);
	pthread_mutex_init(&data->live, NULL);
	while (i < data->philos)
	{
		pthread_mutex_lock(&data->genesis);
		data->tid = i + 1;
		pthread_create(&data->thread[i++], NULL, ft_wait_room, data);
	}
	while (i >= 0)
		pthread_join(*data->thread + i--, NULL);
}

int	main(int argc, char **argv)
{
	t_data			data;

	if (!ft_arg_check(argc, argv, &data))
		return (1);
	ft_philo_genesis(&data);
	pthread_mutex_destroy(&data.genesis);
	free(data.thread);
	return (0);
}
