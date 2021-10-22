/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:33:44 by jsolinis          #+#    #+#             */
/*   Updated: 2021/07/01 11:15:20 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
	{
		while ((*lst)-> next != NULL)
		{
			(*lst) = (*lst)-> next;
		}
		(*lst)-> next = new;
	}
	else
	{
		(*lst) = new;
	}
}
