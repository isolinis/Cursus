/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:52:55 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/14 02:02:13 by jsolinis         ###   ########.fr       */
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
// 5. Code Push_swap language functions.

int	main(int argc, char **argv)
{
	char	**args;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	args = ft_map_argv(argc, argv);
	stack_a = ft_create_stack(stack_a, args);
	ft_isdupe(stack_a);
	free(args);
	ft_swap_stack(&stack_a);
	ft_push_stack(&stack_a, &stack_b);
	ft_print_stack(stack_a);
	ft_print_stack(stack_b);
	return (0);
}
