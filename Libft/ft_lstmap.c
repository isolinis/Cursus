/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:48:32 by jsolinis          #+#    #+#             */
/*   Updated: 2021/07/01 11:17:57 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	t_list	*temp;

	if (lst)
	{
		temp = lst;
		new_lst = ft_lstnew(f(temp->content));
		if (!new_lst)
			return (NULL);
		temp = temp->next;
		while (temp)
		{
			new_elem = ft_lstnew(f(temp->content));
			if (!new_elem)
			{
				ft_lstclear(&new_lst, del);
				return (NULL);
			}
			ft_lstadd_back(&new_lst, new_elem);
			temp = temp->next;
		}
		return (new_lst);
	}
	return (NULL);
}
