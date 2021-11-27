/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortof_five_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:28:07 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/27 20:38:46 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "../Libft/libft.h"

void	ft_case_double_rra(t_list **stack)
{
	*stack = ft_reverse_rotate(*stack);
	write (1, "rra\n", 4);
	*stack = ft_reverse_rotate(*stack);
	write (1, "rra\n", 4);
}

void	ft_case_double_ra(t_list **stack)
{
	*stack = ft_rotate_stack(*stack);
	write (1, "ra\n", 3);
	*stack = ft_rotate_stack(*stack);
	write (1, "ra\n", 3);
}
