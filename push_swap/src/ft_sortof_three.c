/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortof_three.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:07:02 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/22 20:36:20 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "../../Libft/libft.h"

void	ft_case_one(t_list **stack)
{
	ft_case_extra(stack);
	*stack = ft_rotate_stack(*stack);
	write (1, "ra\n", 4);
}

void	ft_case_two(t_list **stack)
{
	*stack = ft_rotate_stack(*stack);
	write (1, "ra\n", 4);
	ft_case_extra(stack);
}

void	ft_case_three(t_list **stack)
{
	*stack = ft_rotate_stack(*stack);
	write (1, "ra\n", 4);
}

void	ft_case_extra(t_list **stack)
{
	ft_swap_stack(stack);
	write (1, "sa\n", 4);
}

void	ft_sortof_three(t_list **stack)
{
	int		first;
	int		second;
	int		third;

	first = (int)((*stack)-> content);
	second = (int)((*stack)-> next -> content);
	third = (int)((*stack)-> next -> next -> content);
	if (first < second)
	{
		ft_case_one(stack);
		if (first < third)
			ft_case_extra(stack);
	}
	else if (first > second)
	{
		if (first < third)
			ft_case_extra(stack);
		else if ((first > third) && (second < third))
			ft_case_two(stack);
		else
			ft_case_three(stack);
	}
}
