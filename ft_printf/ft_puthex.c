/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 20:51:54 by jsolinis          #+#    #+#             */
/*   Updated: 2021/09/28 18:14:50 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(uintptr_t i, char c)
{
	static int	hex;

	hex = 0;
	if (i >= 16)
	{
		ft_puthex((i / 16), c);
		i = i % 16;
	}
	if (i < 16)
	{
		if (i <= 9)
		{
			ft_putchar(i + '0');
			hex++;
		}
		else
		{
			if (c == 'x')
				ft_putchar(i + 87);
			else
				ft_putchar(i + 55);
			hex++;
		}
	}
	return (hex);
}
