/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 23:05:06 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/22 20:36:11 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
#include "../../Libft/libft.h"

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

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
	t_list	*tail;
	t_list	*head;

	head = ft_lstlast(stack);
	tail = ft_bfr_lstlast(stack);
	tail -> next = NULL;
	head -> next = stack;
	stack = head;
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

void	ft_swap_stack(t_list **stack)
{
	t_list	*head;

	head = *stack;
	if (head && head -> next)
		ft_swap((int *)(&(head -> content)), (int *)(&(head -> next -> content)));
}
