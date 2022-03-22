/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arguments.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:45:31 by jsolinis          #+#    #+#             */
/*   Updated: 2022/03/21 17:48:16 by jsolinis         ###   ########.fr       */
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
	return (i);
}

int	ft_get_arguments(t_diner *diner, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (!ft_check_arguments(argv[i++]))
			return (0);
	}
	diner->philos = ft_atoi(argv[1]);
	if (diner->philos <= 0)
		return (0);
	diner->ttdie = ft_atoi(argv[2]);
	diner->tteat = ft_atoi(argv[3]);
	diner->ttsleep = ft_atoi(argv[4]);
	if (diner->ttdie <= 0 || diner->tteat <= 0 || diner->ttsleep <= 0)
		return (0);
	if (argc == 5)
		diner->eat_nbr = -1;
	else
	{
		diner->eat_nbr = ft_atoi(argv[5]);
		if (diner->eat_nbr <= 0)
			return (0);
	}
	return (i);
}

int	ft_arg_check(int argc, char **argv, t_diner *diner)
{	
	if (argc != 5 && argc != 6)
	{
		printf("Incorrect number of args: %i. Enter 5 or 6, try again.\n", argc);
		return (0);
	}
	if (!ft_get_arguments(diner, argc, argv))
	{
		printf("Incorrect Arguments.\n");
		return (0);
	}
	return (1);
}
