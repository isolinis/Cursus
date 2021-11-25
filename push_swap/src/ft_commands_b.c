/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:37:42 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/25 13:24:01 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../../Libft/libft.h"

void	ft_case_sb(t_list **stack)
{
	(*stack) = ft_swap_stack(*stack);
	write (1, "sb\n", 3);
}

void	ft_case_rb(t_list **stack)
{
	(*stack) = ft_rotate_stack(*stack);
	write (1, "rb\n", 3);
}

void	ft_case_rrb(t_list **stack)
{
	*stack = ft_reverse_rotate(*stack);
	write (1, "rrb\n", 4);
}

void	ft_case_pb(t_list **stack_src, t_list **stack_dst)
{
	ft_push_stack(stack_src, stack_dst);
	write(1, "pb\n", 3);
}
