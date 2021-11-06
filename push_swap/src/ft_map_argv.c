/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_argv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:56:01 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/06 22:06:57 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../../Libft/libft.h"

char	**ft_map_argv(int argc, char **argv)
{
	char	**args;
	int		i;
	int		j;

	i = 1;
	j = 0;
	args = (char **) malloc(sizeof(char *) * argc - 1);
	while (i < argc)
	{
		args[j] = ft_strdup(argv[i]);
		i++;
		j++;
	}
	return (args);
}
