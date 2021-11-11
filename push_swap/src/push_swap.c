/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:34:17 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/09 16:10:35 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"
#include "../../Libft/libft.h"

// 1. Store arguments in an array 'args' independently on how is the user input
// 2. Check input is a signed or unsigned digit & convert input from char * to int
// 3. 

int	main(int argc, char **argv)
{
	char	**args;
	int		i;
	int		argl;
	
	args = NULL;
	if (argc < 2)
	{
		write(1, "Error\n", 7);
		exit(0);
	}
	else if (argc == 2)
		args = ft_split(argv[1], ' ');
	else if (argc > 2)
		args = ft_map_argv(argc, argv);
	i = 0;
	while (args[i])
	{
		ft_format_check(args[i]);
		i++;
	}
	argl = i;
	i = 0;
	while (i < argl)
	{
		printf("Input %d: %s\n", i, args[i]);
		i++;
	}
	return (0);
}
