/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isometric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 18:53:35 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/03 16:32:04 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fdf.h"
#include "../mlx/mlx.h"
#include <stdlib.h>
#include <math.h>

void	ft_isometric(t_vars *vars, int p0[3], int p1[3])
{
	p0[0] = p0[0] + 10 * p0[0];
	p0[1] = p0[1] + 10 * p0[1];
	p0[2] = p0[2] + 5 * p0[2];
	p0[0] = (p0[0] - p0[1]) * cos(0.8);
	p0[1] = (p0[0] + p0[1]) * sin(0.8) - p0[2];
	p1[0] = p1[0] + 10 * p1[0];
	p1[1] = p1[1] + 10 * p1[1];
	p1[2] = p1[2] + 5 * p1[2];
	p1[0] = (p1[0] - p1[1]) * cos(0.8);
	p1[1] = (p1[0] + p1[1]) * sin(0.8) - p1[2];
	connect_switch(vars, p0, p1);
}

void	connect_high(t_vars *vars, int p0[3], int p1[3])
{
	int	dxy[3];
	int	xi;
	int	x;

	xi = 1;
	dxy[1] = p1[0] - p0[0];
	dxy[2] = p1[1] - p0[1];
	if (dxy[1] < 0)
	{
		xi = -1;
		dxy[1] = -dxy[1];
	}
	dxy[0] = (2 * dxy[1]) - dxy[2];
	x = p0[0];
	while (p0[1]++ < p1[1])
	{
		printf("%i\n", vars->map.x_start);
		ft_draw_image(vars, x + vars->map.x_start, p0[1] -1 + vars->map.y_start, 0x00FF0000);
		if (dxy[0] > 0)
		{
			x = x + xi;
			dxy[0] = dxy[0] + (2 * (dxy[1] - dxy[2]));
		}
		else
			dxy[0] = dxy[0] + 2 * dxy[1];
	}
}

void	connect_low(t_vars *vars, int p0[3], int p1[3])
{
	int	dxy[3];
	int	yi;
	int	y;

	yi = 1;
	dxy[1] = p1[0] - p0[0];
	dxy[2] = p1[1] - p0[1];
	if (dxy[2] < 0)
	{
		yi = -1;
		dxy[2] = -dxy[2];
	}
	dxy[0] = (2 * dxy[2]) - dxy[1];
	y = p0[1];
	while (p0[0]++ < p1[0])
	{
		ft_draw_image(vars, p0[0] - 1 + vars->map.x_start, y + vars->map.y_start, 0x00FF0000);
		if (dxy[0] > 0)
		{
			y = y + yi;
			dxy[0] = dxy[0] + (2 * (dxy[2] - dxy[1]));
		}
		else
			dxy[0] = dxy[0] + 2 * dxy[2];
	}
}

void	connect_switch(t_vars *vars, int p0[3], int p1[3])
{
	if (abs(p1[1] - p0[1]) < abs(p1[0] - p0[0]))
	{
		if (p0[0] > p1[0])
			connect_low(vars, p1, p0);
		else
			connect_low(vars, p0, p1);
	}
	else
	{
		if (p0[1] > p1[1])
			connect_high(vars, p1, p0);
		else
			connect_high(vars, p0, p1);
	}
}
