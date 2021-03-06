/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_argv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:34:17 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/27 20:37:15 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "../Libft/libft.h"

char	**ft_map_argv(int argc, char **argv)
{
	char	**args;
	int		i;

	args = NULL;
	if (argc < 2)
	{
		write(1, "Error\n", 7);
		exit(0);
	}
	else if (argc == 2)
		args = ft_split(argv[1], ' ');
	else if (argc > 2)
		args = ft_multi_arg(argc, argv);
	i = 0;
	while (args[i])
	{
		ft_format_check(args[i]);
		i++;
	}
	return (args);
}
