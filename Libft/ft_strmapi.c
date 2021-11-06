/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 12:33:48 by jsolinis          #+#    #+#             */
/*   Updated: 2021/07/08 10:11:05 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned char	c;
	char			*ptr;

	if (!s)
		return (NULL);
	i = 0;
	ptr = (char *) malloc((sizeof(char) * ft_strlen(s)) + 1);
	if (!ptr)
		return (NULL);
	while (s[i] != '\0')
	{
		c = s[i];
		ptr[i] = f(i, c);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
