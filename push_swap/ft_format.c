/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:24:58 by jsolinis          #+#    #+#             */
/*   Updated: 2021/10/18 18:11:05 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"

int	ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_format(char *s)
{
	int 	i;
	int 	j;
	char	*nums;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == ' ')
		{
			i++;
		}
		if (ft_is_digit(s[i]))
		{
			nums[j] = s[i];
			j++;
			printf("soy un número");
		}
		i++;
	}
}
