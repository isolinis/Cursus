/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:38:21 by jsolinis          #+#    #+#             */
/*   Updated: 2021/07/02 10:18:49 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*str_src;
	unsigned char	*str_dst;

	i = 0;
	str_src = (unsigned char *)src;
	str_dst = (unsigned char *)dst;
	if (dst == '\0' && src == '\0')
		return (0);
	if (str_dst > str_src)
	{
		while (len--)
			str_dst[len] = str_src[len];
	}
	else if (str_dst < str_src)
		ft_memcpy(dst, src, len);
	return (dst);
}
