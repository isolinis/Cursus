/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:45:12 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/07 18:02:50 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include "../Libft/libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_wait_room(void *params)
{
	t_philo	philo;
	t_data	*data;

	data = params;
	philo = (t_philo){.tid = data->tid, .data = data};
	printf("I'm thread %i\n", philo.tid);
	pthread_mutex_unlock(&philo.data->genesis);
	return (NULL);
}

int	main(int argc, char **argv)
{
	t_data			data;
	pthread_t		*thread;

	ft_arg_check(argc, argv, &data);
	data.tid = 0;
	data.philos = ft_atoi(argv[1]);
	thread = malloc (data.philos * sizeof(pthread_t));
	pthread_mutex_init(&data.genesis, NULL);
	while (data.tid < data.philos)
	{
		pthread_mutex_lock(&data.genesis);
		pthread_create(&thread[data.tid++], NULL, ft_wait_room, &data);
	}
	while (data.tid >= 0)
	{
		usleep(2000);
		pthread_join(*thread + data.tid--, NULL);
	}
	pthread_mutex_destroy(&data.genesis);
	free(thread);
	return (0);
}
