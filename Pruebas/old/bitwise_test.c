/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitwise_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:23:46 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/27 17:13:26 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_is_bit_set(int num, int bitp)
{
	if (num & (1 << (bitp - 1)))
		printf("El bit %d es un 1", bitp);
	else
		printf("El bit %d es un 0", bitp);
}

unsigned int	ft_count_set_bits(int num)
{
	int count;
	int iteration;

	count = 0;
	iteration = 0;
	while (num)
	{
		count = num & 1;
		num >>= 1;
		iteration++;
	}
	return (iteration);
}

int	main(void)
{
	int num = 5;
	int bitp = 3;

	printf("El número %d tiene %d bits set.\n", num, ft_count_set_bits(num));
	ft_is_bit_set(num, bitp);
	return (0);
}
