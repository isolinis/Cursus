/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:53:38 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/27 18:13:31 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "../../Libft/libft.h"

int	ft_is_bit_set(int num, int bitp)
{
	if (num & (1 << (bitp - 1)))
		return (1);
	else
		return (0);
}

int	ft_find_bit_count(int num)
{
	int	count;
	int	iteration;

	count = 0;
	iteration = 0;
	while (num)
	{
		count += num & 1;
		num >>= 1;
		iteration++;
	}
	return (iteration);
}

void	ft_radix_sort(t_list **stack_src, t_list **stack_dst, int size)
{
	int		iteration;
	int		bitp;
	int		ref_b;

	iteration = ft_find_bit_count(size);
	bitp = 1;
	ref_b = 0;
	while (iteration)
	{
		ref_b = ft_bit_a_bit(stack_src, stack_dst, size, bitp);
		while (ref_b)
		{
			ft_push_stack(stack_dst, stack_src);
			write(1, "pa\n", 3);
			ref_b--;
		}
		iteration--;
		bitp++;
	}
}
