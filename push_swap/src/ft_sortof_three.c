/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortof_three.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:07:02 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/23 20:53:44 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "../../Libft/libft.h"

void	ft_case_one(t_list **stack)
{
	ft_case_sa(stack);
	ft_case_rra(stack);
}

void	ft_case_sa_rra(t_list **stack)
{
	ft_case_sa(stack);
	ft_case_rra(stack);
}

void	ft_sortof_three(t_list **stack)
{
	int		first;
	int		second;
	int		third;

	first = (int)((*stack)-> content);
	second = (int)((*stack)-> next -> content);
	third = (int)((*stack)-> next -> next -> content);
	if ((first > second) && (second > third) && (first > third))
		ft_case_sa_rra(stack);
	else if ((first > second) && (second < third) && (first > third))
	{
		ft_case_rra(stack);
		ft_case_rra(stack);
	}
	else if ((first < second) && (first > third) && (second > third))
		ft_case_ra(stack);
	else if ((first < second) && (second > third) && (first < third))
	{
		ft_case_rra(stack);
		ft_case_sa(stack);
	}
	else
		ft_case_sa(stack);
}
