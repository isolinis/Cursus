/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:14:56 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/12 22:04:14 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
#include "../../Libft/libft.h"

t_list  *ft_create_stack(t_list *stack, char **argv)
{
	int     i;
	size_t  nb;

	i = 0;
	while(argv[i])
	{
		nb = (size_t)ft_atoi(argv[i]);
		ft_lstadd_back(&stack, ft_lstnew((void *)nb));
		printf("newnode: %d - %i /// ", i, (int)stack->content );
		i++;
	}
	return (stack);
}

void	ft_print_stack(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	printf("\nhead ->");
	while (tmp)
	{
		printf(" %i ->", (int) (tmp -> content));
		tmp = tmp -> next;
	}
	printf(" null\n");
}
