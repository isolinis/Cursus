/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:33:44 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/13 18:56:56 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (*lst)
	{
		head = (*lst);
		while ((*lst)-> next != NULL)
		{
			(*lst) = (*lst)-> next;
		}
		(*lst)-> next = new;
		(*lst) = head;
	}
	else
	{
		(*lst) = new;
	}
}
