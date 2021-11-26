/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortof_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:11:51 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/26 19:44:54 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"
#include "../../Libft/libft.h"

int	ft_find_min(t_list *aux, int min)
{
	t_list	*ref;

	ref = aux;
	while (aux)
	{
		if ((int)(aux -> content) < min)
			min = (int)(aux -> content);
		aux = aux -> next;
	}
	aux = ref;
	return (min);
}

int	ft_find_pos(t_list *aux, int iteration, int min)
{
	t_list	*ref;

	ref = aux;
	while (aux)
	{
		if ((int)(aux -> content) == min)
			break ;
		aux = aux -> next;
		iteration++;
	}
	aux = ref;
	return (iteration);
}

void	ft_push_til_three(t_list **stack_src, int iteration, int size)
{
	if (iteration == 1)
		ft_case_sa(stack_src);
	if (iteration == 2)
	{
		ft_case_ra(stack_src);
		ft_case_ra(stack_src);
	}
	if (iteration == 3)
	{
		if (size == 4)
			ft_case_rra(stack_src);
		else
			ft_double_rra(stack_src);
	}
	if (iteration == 4)
		ft_case_rra(stack_src);
}

void	ft_sortof_five(t_list **stack_src, t_list **stack_dst, int size)
{
	t_list	*aux;
	int		iteration;
	int		min;

	while (size != 3)
	{
		aux = *stack_src;
		min = (int)(*stack_src)-> content;
		min = ft_find_min(aux, min);
		iteration = 0;
		iteration = ft_find_pos(aux, iteration, min);
		ft_push_til_three(stack_src, iteration, size);
		ft_push_stack(stack_src, stack_dst);
		write(1, "pb\n", 3);
		size--;
	}
	ft_sortof_three(stack_src);
	while (*stack_dst)
	{
		ft_push_stack(stack_dst, stack_src);
		write(1, "pa\n", 3);
	}
}
