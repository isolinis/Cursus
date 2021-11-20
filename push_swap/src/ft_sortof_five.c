/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortof_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:11:51 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/20 20:15:29 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
#include "../../Libft/libft.h"

void ft_sortof_five(t_list **stack_src, t_list **stack_dst, int size)
{
	t_list	*aux;

	aux = *stack_src;
	ft_print_stack(aux);
	ft_print_stack(*stack_src);
	ft_print_stack(*stack_dst);
	printf("\n%d", size);
}
