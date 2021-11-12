/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:52:55 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/12 22:04:12 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
#include "../../Libft/libft.h"

// 1. Store arguments in an array 'args' independently on how is the user input
// 2. Check input is a signed or unsigned digit & convert input from char * to int
// 3. Generate stack and insert input formatted as int to content.

int	main(int argc, char **argv)
{
	char	**args;
	t_list	*stack_a;
	int	i = 0;

	stack_a = NULL;
	args = ft_map_argv(argc, argv);
	while (args[i])
	{
		printf("Input %i: %s\n", i, args[i]);
		i++;
	}
	stack_a = ft_create_stack(stack_a, args);
	ft_print_stack(stack_a);
	return (0);
}
