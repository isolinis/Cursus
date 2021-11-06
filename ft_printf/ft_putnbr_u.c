/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 20:12:41 by jsolinis          #+#    #+#             */
/*   Updated: 2021/10/07 17:36:21 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int i)
{
	static int	udec;

	udec = 0;
	if (i >= 10)
	{
		ft_putnbr_u(i / 10);
		i = i % 10;
	}
	if (i < 10)
	{
		ft_putchar(i + '0');
		udec++;
	}
	return (udec);
}
