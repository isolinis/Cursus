/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:53:38 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/26 20:46:34 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
#include "../../Libft/libft.h"

void	ft_radix_sort(t_list **stack_src, t_list **stack_dst, int size)
{
	t_list	*ref_src;
	t_list	*ref_dst;
	int		i;
	int		p;

	ref_src = *stack_src;
	ref_dst = *stack_dst;
	i = 1;
	p = 1;
	while (p)
	{
		while (ref_src)
		{
			if (i & ref_src -> pos)
				ft_case_ra(stack_src);
			else
			{
				ft_push_stack(stack_src, stack_dst);
				write(1, "pb\n", 3);
			}
			ref_src = ref_src -> next;
		}
		p = 0;
	}
	printf("Size: %d\n", size);
	printf("-------------STACK A-------------------\n");
	ft_print_stack(*stack_src);
	printf("-------------STACK B-------------------\n");
	ft_print_stack(*stack_dst);
}
