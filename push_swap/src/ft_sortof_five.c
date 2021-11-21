/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortof_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:11:51 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/21 19:33:14 by jsolinis         ###   ########.fr       */
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

int ft_find_pos(t_list *aux, int iteration, int min)
{
	t_list	*ref;

	ref = aux;
	while (aux)
	{
		if ((int)(aux -> content) == min)
			break;
		aux = aux -> next;
		iteration++;
	}
	aux = ref;
	return (iteration);
}

void ft_push_til_three(t_list **stack, int iteration, int size)
{
	if (iteration == 1)
		ft_case_extra(stack);
	if (iteration == 2)
		ft_case_double_rra(stack);
	if (iteration == 3)
	{
		if (size == 4)
			ft_case_three(stack);
		else
			ft_case_double_ra(stack);
	}
	if (iteration == 4)
		ft_case_three(stack);
	ft_print_stack(*stack);
}

void ft_sortof_five(t_list **stack_src, t_list **stack_dst, int size)
{
	t_list	*aux;
	int		iteration;
	int		min;

	aux = *stack_src;
	iteration = 0;
	while (size > 3)
	{
		min = (int)(*stack_src) -> content;
		min = ft_find_min(aux, min);
		iteration = ft_find_pos(aux, iteration, min);
		ft_push_til_three(stack_src, iteration, size);
	//	ft_push_stack(stack_src, stack_dst);
		write(1, "pa\n", 4);
		size--;
	}
//	printf("\n%d", size);
//	printf("\n%d", min);
//	printf("\n%d", iteration);
	ft_print_stack(*stack_src);
	ft_print_stack(*stack_dst);
}
