/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:52:55 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/13 19:52:21 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../../Libft/libft.h"

// 1. Store arguments in an array 'args' independently on
// how is the user input entered.
// 2. Check input is a signed or unsigned digit & convert
//  input from char * to int.
// 3. Generate stack and insert input formatted as int to
// content.
// 4. Check for duplicate numbers.

int	main(int argc, char **argv)
{
	char	**args;
	t_list	*stack_a;

	stack_a = NULL;
	args = ft_map_argv(argc, argv);
	stack_a = ft_create_stack(stack_a, args);
	ft_isdupe(stack_a);
	return (0);
}
