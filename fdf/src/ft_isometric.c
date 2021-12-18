/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isometric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 18:53:35 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/18 22:58:31 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdlib.h>
#include <math.h>

int	ft_isometric_x(int x, int y)
{
	double	aux_x;

	aux_x = 0;
	aux_x = (x - y) * cos(0.8);
	return (aux_x);
}

int	ft_isometric_y(int x, int y, int z)
{
	double	aux_y;

	aux_y = 0;
	aux_y = (x - y) * sin(0.8) - z;
	return (aux_y);
}
