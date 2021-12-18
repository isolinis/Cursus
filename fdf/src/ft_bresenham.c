/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bresenham.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:14:40 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/18 23:09:23 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "fdf.h"
#include "../mlx/mlx.h"

void	ft_bresenham_x(t_vars *vars, int x1, int x2, int y1, int y2)
{
	int	x;
	int	y;
	int	dif_x;
	int	dif_y;
	int	slope;

	x = x1;
	y = y1;
	dif_x = x2 - x1;
	dif_y = y2 - y1;
	slope = (2 * dif_y) - dif_x;
	while (x <= x2)
	{
		mlx_pixel_put(vars->mlx, vars->win, x, y, 0xFF0000);
		x++;
		if (slope < 0)
			slope = slope + 2 * dif_y;
		else
		{
			slope = slope + (2 * dif_y) - (2 * dif_x);
			y++;
		}
	}
}

void	ft_bresenham_y(t_vars *vars, int x1, int x2, int y1, int y2)
{
	int	x;
	int	y;
	int	dif_x;
	int	dif_y;
	int	slope;

	x = x1;
	y = y1;
	dif_x = x2 - x1;
	dif_y = y2 - y1;
	slope = (2 * dif_x) - dif_y;
	while (y <= y2)
	{
		mlx_pixel_put(vars->mlx, vars->win, x, y, 0x00FF00);
		y++;
		if (slope < 0)
			slope = slope + 2 * dif_x;
		else
		{
			slope = slope + (2 * dif_x) - (2 * dif_y);
			x++;
		}
	}
}

void	ft_paint(t_vars *vars)
{
	int	y;
	int	x;
	int	sc;

	vars->map.y_start = 100;
	vars->map.x_start = 100;
	vars->map.scale = 30;
	sc = vars->map.scale;
	y = 0;
	while (y <= (vars->map.y_max * sc))
	{
		x = 0;
		while (x < (vars->map.x_max * sc))
		{
			ft_bresenham_x(vars, (x + vars->map.x_start),
				(x + vars->map.x_start + sc), (y + vars->map.y_start),
				(y + vars->map.y_start));
			ft_bresenham_y(vars, (x + vars->map.x_start),
				(x + vars->map.x_start),
				(y + vars->map.y_start), (y + vars->map.y_start + sc));
			x += sc;
		}
		y += sc;
	}
}
