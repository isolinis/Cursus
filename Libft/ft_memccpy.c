/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:58:16 by jsolinis          #+#    #+#             */
/*   Updated: 2021/07/07 12:41:02 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str_src;
	unsigned char	*str_dst;
	unsigned char	*ptr;

	str_dst = (unsigned char *) dst;
	str_src = (unsigned char *) src;
	i = 0;
	ptr = 0;
	while (i < n & ptr == 0)
	{
		str_dst[i] = str_src[i];
		if (str_src[i] == (unsigned char) c)
			ptr = str_dst + i + 1;
		i++;
	}
	return (ptr);
}
