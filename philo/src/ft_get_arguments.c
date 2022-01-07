/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arguments.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:45:31 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/07 17:29:29 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "philo.h"
#include "../Libft/libft.h"

int	ft_check_arguments(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_get_arguments(t_data *data, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (!ft_check_arguments(argv[i++]))
			return (0);
	}
	data->philos = ft_atoi(argv[1]);
	data->time_to_die = ft_atoi(argv[2]);
	data->time_to_eat = ft_atoi(argv[3]);
	data->time_to_sleep = ft_atoi(argv[4]);
	if (argc == 5)
		data->eat_repeats = 0;
	else
		data->eat_repeats = ft_atoi(argv[5]);
	return (1);
}

int	ft_arg_check(int argc, char **argv, t_data *data)
{	
	if (argc != 5 && argc != 6)
	{
		printf("Incorrect number of args: %i. Enter 5 or 6, try again.\n", argc);
		return (1);
	}
	if (!ft_get_arguments(data, argc, argv))
	{
		printf("Incorrect type of args. Arguments must be integers.\n");
		return (2);
	}
	return (0);
}

