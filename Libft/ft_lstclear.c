/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:40:54 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/23 19:18:46 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst && !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)-> next;
		ft_lstdelone((*lst), del);
		(*lst) = tmp;
	}
}
