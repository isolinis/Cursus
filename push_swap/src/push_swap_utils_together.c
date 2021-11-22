/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_together.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 01:38:04 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/22 19:35:29 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../../Libft/libft.h"

void	ft_swap_stack_inc(t_list **stack_a, t_list **stack_b)
{
	ft_swap_stack(stack_a);
	ft_swap_stack(stack_b);
}

void	ft_rotate_stack_inc(t_list **stack_a, t_list **stack_b)
{
	*stack_a = ft_rotate_stack(*stack_a);
	*stack_b = ft_rotate_stack(*stack_b);
}

void	ft_reverse_rotate_inc(t_list **stack_a, t_list **stack_b)
{
	*stack_a = ft_reverse_rotate(*stack_a);
	*stack_b = ft_reverse_rotate(*stack_b);
}
