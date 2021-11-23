/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:37:42 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/23 20:53:46 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../../Libft/libft.h"

void	ft_case_sa(t_list **stack)
{
	(*stack) = ft_swap_stack(*stack);
	write (1, "sa\n", 4);
}

void	ft_case_rra(t_list **stack)
{
	(*stack) = ft_reverse_rotate(*stack);
	write (1, "rra\n", 5);
}

void	ft_case_ra(t_list **stack)
{
	*stack = ft_rotate_stack(*stack);
	write (1, "ra\n", 4);
}
