/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_order_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:54:03 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/27 17:13:06 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../../Libft/libft.h"

int	ft_is_ordered(t_list *stack)
{
	t_list	*current;
	int		i;

	i = 1;
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
	if (size == 2)
		ft_case_sa(stack_a);
	if (size == 3)
		ft_sortof_three(stack_a);
	if ((size <= 5) && (size > 3))
		ft_sortof_five(stack_a, stack_b, size);
	if (size > 5)
		ft_sort_big(stack_a, stack_b, size);
}
