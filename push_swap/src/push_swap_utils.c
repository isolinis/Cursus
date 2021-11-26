/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 23:05:06 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/26 16:23:46 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
#include "../../Libft/libft.h"

t_list	*ft_bfr_lstlast(t_list *stack)
{
	if (stack)
	{
		while (stack -> next -> next != NULL)
			stack = stack -> next;
	}
	return (stack);
}

void	ft_push_stack(t_list **stack_src, t_list **stack_dst)
{
	t_list	*aux_dst;
	t_list	*aux_src;
	t_list	*aux;

	aux_dst = *stack_dst;
	aux_src = *stack_src;
	if (aux_src)
	{
		aux = aux_src;
		aux_src = aux_src -> next;
		*stack_src = aux_src;
		if (!aux_dst)
		{
			aux_dst = aux;
			aux_dst -> next = NULL;
			*stack_dst = aux_dst;
		}
		else
		{
			aux -> next = aux_dst;
			*stack_dst = aux;
		}
	}
}

t_list	*ft_rotate_stack(t_list *stack)
{
	t_list	*tmp_first;
	t_list	*tmp_last;
	t_list	*aux;

	aux = stack;
	if (!(aux && aux->next))
		return (NULL);
	tmp_first = aux;
	aux = aux -> next;
	tmp_last = aux;
	while (tmp_last->next)
	{
		tmp_last = tmp_last->next;
	}
	tmp_last -> next = tmp_first;
	tmp_first -> next = NULL;
	stack = aux;
	return (stack);
}

t_list	*ft_reverse_rotate(t_list *stack)
{
	t_list	*head;
	t_list	*next;
	t_list	*tail;

	head = ft_lstlast(stack);
	next = stack;
	tail = ft_bfr_lstlast(next);
	tail -> next = NULL;
	head -> next = next;
	stack = head;
	return (stack);
}

t_list	*ft_swap_stack(t_list *stack)
{
	t_list	*aux;

	if (stack && stack -> next != NULL)
	{
		aux = stack -> next;
		stack -> next = aux -> next;
		aux -> next = stack;
		stack = aux;
	}
	return (stack);
}
