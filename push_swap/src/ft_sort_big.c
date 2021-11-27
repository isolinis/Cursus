/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:55:27 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/27 20:38:08 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include "push_swap.h"

void	ft_fill_stack(t_list *aux)
{
	t_list	*ref;

	ref = aux;
	while (aux)
	{
		aux -> pos = 0;
		aux -> checked = 0;
		aux = aux -> next;
	}
}

int	ft_find_min_unchecked(t_list *aux, int min)
{
	t_list	*ref;

	ref = aux;
	while (aux)
	{
		if ((int)(aux -> content) < min && (aux -> checked == 0))
			min = (int)(aux -> content);
		aux = aux -> next;
	}
	aux = ref;
	return (min);
}

void	ft_update_pos(t_list *aux, int min, int count)
{
	t_list	*ref;

	ref = aux;
	while (aux)
	{
		if ((int)(aux -> content) == min)
		{
			aux -> pos = count;
			aux -> checked = 1;
		}
		aux = aux -> next;
	}
	aux = ref;
}

void	ft_sort_big(t_list **stack_src, t_list **stack_dst, int size)
{
	t_list	*aux;
	int		min;
	int		count;
	int		ref;

	ref = size;
	count = 0;
	aux = *stack_src;
	ft_fill_stack(aux);
	while (size != 0)
	{
		aux = *stack_src;
		min = 2147483647;
		min = ft_find_min_unchecked(aux, min);
		ft_update_pos(aux, min, count);
		count++;
		size--;
	}
	size = ref;
	ft_radix_sort(stack_src, stack_dst, size);
}
