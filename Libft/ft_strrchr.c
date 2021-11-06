/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:36:20 by jsolinis          #+#    #+#             */
/*   Updated: 2021/07/01 11:25:23 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c_c;
	int		i;
	char	*str;
	char	*ptr;

	c_c = (char) c;
	i = 0;
	str = (char *) s;
	ptr = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c_c)
			ptr = str + i;
		i++;
	}
	if (str[i] == c_c)
		ptr = str + i;
	return (ptr);
}
