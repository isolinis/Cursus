/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bit_a_bit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:25:58 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/27 18:46:51 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "../../Libft/libft.h"

int	ft_bit_a_bit(t_list **stack_src, t_list **stack_dst, int size, int bitp)
{
	t_list	*ref_src;
	int		ref;
	int		ref_b;

	ref = size;
	ref_b = 0;
	while (ref)
	{
		ref_src = *stack_src;
		if (ft_is_bit_set(ref_src -> pos, bitp))
			ft_case_ra(stack_src);
		else
		{
			ft_push_stack(stack_src, stack_dst);
			write(1, "pb\n", 3);
			ref_b++;
		}
		ref--;
	}
	return (ref_b);
}
