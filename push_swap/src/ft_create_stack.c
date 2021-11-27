/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:14:56 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/27 20:36:21 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "../Libft/libft.h"

void	ft_free_stack(t_list **stack)
{
	t_list	*tmp;

	if (!stack)
		return ;
	while (*stack)
	{
		tmp = (*stack);
		(*stack) = (*stack)-> next;
		free(tmp);
	}
}

t_list	*ft_create_stack(t_list *stack, char **argv)
{
	int		i;
	size_t	num;

	i = 0;
	while (argv[i])
	{
		num = (size_t)ft_atoi(argv[i]);
		ft_lstadd_back(&stack, ft_lstnew((void *)num));
		i++;
	}
	return (stack);
}

void	ft_isdupe(t_list *stack)
{
	t_list	*next;

	while (stack)
	{
		next = stack -> next;
		while (next)
		{
			if (next -> content == stack -> content)
			{
				write(1, "Error\n", 7);
				exit(0);
			}
			next = next -> next;
		}
		stack = stack -> next;
	}
}
