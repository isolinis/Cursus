/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:00:42 by jsolinis          #+#    #+#             */
/*   Updated: 2021/10/06 16:30:10 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	ft_dup(char c, char *s)
{
	
}

void	inter(char *s1, char *s2)
{
	int	i;
	int j;
	char	*res[ft_strlen(s1) + ft_strlen(s2)];

	i = 0;
	j = 0;
	while (s1[i])
	{
		res += ft_dup(s1[i], s2);
		i++;
	}
}
