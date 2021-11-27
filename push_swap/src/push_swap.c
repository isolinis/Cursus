/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:52:55 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/27 20:39:43 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../Libft/libft.h"

// 1. Store arguments in an array 'args' independently on
// how is the user input entered.
// 2. Check input is a signed or unsigned digit & convert
//  input from char * to int.
// 3. Generate stack and insert input formatted as int to
// content.
// 4. Check for duplicate numbers.
// 5. Code Push_swap language functions.
// 6. Check that list is / is not ordered.
// 7. Order a list of up to 3 components.
// 8. Order a list of up to 5 components.
// 9. Order a list of more than 5 components.

int	main(int argc, char **argv)
{
	char	**args;
	int		size;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		exit(0);
	args = ft_map_argv(argc, argv);
	stack_a = ft_create_stack(stack_a, args);
	ft_isdupe(stack_a);
	size = ft_get_argsize(args);
	free(args);
	if (ft_is_ordered(stack_a))
		exit(0);
	ft_sort_list(&stack_a, &stack_b, size);
	ft_free_stack(&stack_a);
	ft_free_stack(&stack_b);
	return (0);
}
