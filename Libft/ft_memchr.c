/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 20:34:38 by jsolinis          #+#    #+#             */
/*   Updated: 2021/07/01 11:19:17 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	ptr = 0;
	while (i < n && ptr == 0)
	{
		if (str[i] == (unsigned char) c)
			ptr = str + i;
		i++;
	}
	return (ptr);
}
