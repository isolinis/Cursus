/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divide.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:39:43 by jsolinis          #+#    #+#             */
/*   Updated: 2021/10/16 20:27:55 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"

void	ft_divide(char **s)
{
	int	i;	

	i = 0;
	while (s[i])
	{
		printf("%s\n", s[i]);
		i++;
	}
}
