/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 23:05:06 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/20 20:15:39 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../../Libft/libft.h"

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_swap_stack(t_list **stack)
{
	t_list	*head;

	head = *stack;
	if (head && head -> next)
		ft_swap((int *)(&(head -> content)), (int *)(&(head -> next -> content)));
}

void	ft_rotate_stack(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	head = *stack;
	tail = ft_lstlast(*stack);
	if (head && head -> next)
		ft_swap((int *)(&(head -> content)), (int *)(&(tail -> content)));
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

void	ft_reverse_rotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	head = *stack;
	tail = ft_lstlast(*stack);
	if (head && head -> next)
		ft_swap((int *)(&(tail -> content)), (int *)(&(head -> content)));
}
