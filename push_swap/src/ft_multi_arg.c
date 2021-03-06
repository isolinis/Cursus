/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multi_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:56:01 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/27 20:37:30 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../Libft/libft.h"

char	**ft_multi_arg(int argc, char **argv)
{
	char	**args;
	int		i;
	int		j;

	i = 1;
	j = 0;
	args = (char **)malloc(sizeof(char *) * argc);
	while (i < argc)
	{
		args[j] = argv[i];
		i++;
		j++;
	}
	args[j] = NULL;
	return (args);
}
