/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:15:00 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/07 18:05:28 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"
#include "../../Libft/libft.h"

void	ft_format_check(char *arg)
{
	int	i;
 
	i = 0;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
		{
			if (!ft_is_signed_digit(arg[i], arg[i + 1]))
			{
				write(1, "Error\n", 7);
				exit(0);
			}
		}
		i++;
	}
}
