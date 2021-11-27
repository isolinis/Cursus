/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:37:42 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/27 20:35:11 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "../Libft/libft.h"

void	ft_case_sa(t_list **stack)
{
	(*stack) = ft_swap_stack(*stack);
	write (1, "sa\n", 3);
}

void	ft_case_ra(t_list **stack)
{
	(*stack) = ft_rotate_stack(*stack);
	write (1, "ra\n", 3);
}

void	ft_case_rra(t_list **stack)
{
	*stack = ft_reverse_rotate(*stack);
	write (1, "rra\n", 4);
}

void	ft_case_pa(t_list **stack_src, t_list **stack_dst)
{
	ft_push_stack(stack_src, stack_dst);
	write(1, "pa\n", 3);
}

void	ft_double_rra(t_list **stack)
{
	ft_case_rra(stack);
	ft_case_rra(stack);
}
