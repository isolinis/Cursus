/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isometric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 18:53:35 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/05 19:55:35 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fdf.h"
#include "../mlx/mlx.h"
#include <stdlib.h>
#include <math.h>

void	ft_isometric(t_vars *vars, int p0[3], int p1[3])
{
	p0[0] = p0[0] + vars->map.scale * p0[0];
	p0[1] = p0[1] + vars->map.scale * p0[1];
	p0[2] = p0[2] + (vars->map.scale / 2) * p0[2];
	p0[0] = (p0[0] - p0[1]) * cos(M_PI / vars->map.angle);
	p0[1] = (p0[0] + p0[1]) * sin(M_PI / vars->map.angle) - p0[2];
	p1[0] = p1[0] + vars->map.scale * p1[0];
	p1[1] = p1[1] + vars->map.scale * p1[1];
	p1[2] = p1[2] + (vars->map.scale / 2) * p1[2];
	p1[0] = (p1[0] - p1[1]) * cos(M_PI / vars->map.angle);
	p1[1] = (p1[0] + p1[1]) * sin(M_PI / vars->map.angle) - p1[2];
	connect_switch(vars, p0, p1);
}

void	connect_high(t_vars *vars, int p0[3], int p1[3])
{
	int	dxy[3];
	int	x;

	vars->xi = 1;
	dxy[1] = p1[0] - p0[0];
	dxy[2] = p1[1] - p0[1];
	if (dxy[1] < 0)
	{
		vars->xi = -1;
		dxy[1] = -dxy[1];
	}
	dxy[0] = (2 * dxy[1]) - dxy[2];
	x = p0[0];
	while (p0[1]++ < p1[1])
	{
		ft_draw_image(vars, x + vars->map.x_start,
			p0[1] -1 + vars->map.y_start, 0x00FF0000);
		if (dxy[0] > 0)
		{
			x = x + vars->xi;
			dxy[0] = dxy[0] + (2 * (dxy[1] - dxy[2]));
		}
		else
			dxy[0] = dxy[0] + 2 * dxy[1];
	}
}

void	connect_low(t_vars *vars, int p0[3], int p1[3])
{
	int	dxy[3];
	int	y;

	vars->yi = 1;
	dxy[1] = p1[0] - p0[0];
	dxy[2] = p1[1] - p0[1];
	if (dxy[2] < 0)
	{
	vars->yi = -1;
		dxy[2] = -dxy[2];
	}
	dxy[0] = (2 * dxy[2]) - dxy[1];
	y = p0[1];
	while (p0[0]++ < p1[0])
	{
		ft_draw_image(vars, p0[0] - 1 + vars->map.x_start,
			y + vars->map.y_start, 0x00FF0000);
		if (dxy[0] > 0)
		{
			y = y + vars->yi;
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
