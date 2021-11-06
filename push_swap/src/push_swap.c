/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:34:17 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/06 22:08:55 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"
#include "../../Libft/libft.h"

int	main(int argc, char **argv)
{
	char	**args;
	int		i;

	args = NULL;
	if (argc < 2)
		write(1, "Error", 5);
	else if (argc == 2)
		args = ft_split(argv[1], ' ');
	else if (argc > 2)
		args = ft_map_argv(argc, argv);
	/*
	i = 0;
	while (i < argc - 1)
	{
		printf("Input %d: %s\n", i, args[i]);
		i++;
	}
	*/
	return (0);
}
