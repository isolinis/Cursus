/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 09:58:40 by jsolinis          #+#    #+#             */
/*   Updated: 2021/07/12 12:55:13 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	if (s != NULL && f != NULL)
	{
		while (i < len)
		{
			(*f)(i, s);
			s++;
			i++;
		}
	}
}
