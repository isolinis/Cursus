/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_order_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:54:03 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/22 21:06:11 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
#include "../../Libft/libft.h"

int	ft_is_ordered(t_list *stack)
{
	t_list	*current;
	int		i;

	i = 0;
	current = stack -> next;
	while (current)
	{
		if ((int)((*current).content) < (int)((*stack).content))
			i = 0;
		current = current -> next;
		stack = stack -> next;
	}
	return (i);
}

int	ft_get_argsize(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}

void	ft_sort_list(t_list **stack_a, t_list **stack_b, int size)
{
	//ft_print_stack(*stack_a);
	//ft_print_stack(*stack_b);
	if (size == 2)
		ft_case_extra(stack_a);
	if (size == 3)
		ft_sortof_three(stack_a);
	if ((size <= 5) && (size > 3))
		ft_sortof_five(stack_a, stack_b, size);
	//ft_print_stack(*stack_a);
	//ft_print_stack(*stack_b);
}
