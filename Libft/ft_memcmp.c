/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 20:58:40 by jsolinis          #+#    #+#             */
/*   Updated: 2021/07/02 09:34:41 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str_s1;
	unsigned char	*str_s2;

	i = 0;
	str_s1 = (unsigned char *) s1;
	str_s2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (n > i)
	{
		if (str_s1[i] != str_s2[i])
			return (str_s1[i] - str_s2[i]);
		i++;
	}
	return (0);
}
