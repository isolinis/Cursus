/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:33:44 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/12 22:04:21 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	**tmp;

	tmp = lst;
	if (*lst)
	{
		while ((*tmp)-> next != NULL)
		{
			(*tmp) = (*tmp)-> next;
		}
		(*tmp)-> next = new;
	}
	else
	{
		(*lst) = new;
	}
}
