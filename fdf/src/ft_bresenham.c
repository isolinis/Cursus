/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bresenham.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:14:40 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/03 16:09:24 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fdf.h"
#include "../mlx/mlx.h"

void	ft_draw_image(t_vars *vars, int x, int y, int color)
{
	char	*dst;

	if (x < 0 || y < 0 || y >= 1080 || x >= 1920)
		return ;
	dst = vars->addr + (y * vars->line_length + x * (vars->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void	ft_paint_down(t_vars *vars, int x, int y)
{
	int	coord_start_d[3];
	int	coord_down[3];

	coord_start_d[0] = vars->map.coords[y][x].x;
	coord_start_d[1] = vars->map.coords[y][x].y;
	coord_start_d[2] = vars->map.coords[y][x].z;
	coord_down[0] = vars->map.coords[y + 1][x].x;
	coord_down[1] = vars->map.coords[y + 1][x].y;
	coord_down[2] = vars->map.coords[y + 1][x].z;
	ft_isometric(vars, coord_start_d, coord_down);
}

void	ft_paint(t_vars *vars)
{
	int	y;
	int	x;
	int	coord_start_r[3];
	int	coord_right[3];

	y = 0;
	while (y < vars->map.y_max)
	{
		x = 0;
		while (x < vars->map.x_max)
		{
			coord_start_r[0] = vars->map.coords[y][x].x;
			coord_start_r[1] = vars->map.coords[y][x].y;
			coord_start_r[2] = vars->map.coords[y][x].z;
			coord_right[0] = vars->map.coords[y][x + 1].x;
			coord_right[1] = vars->map.coords[y][x + 1].y;
			coord_right[2] = vars->map.coords[y][x + 1].z;
			ft_isometric(vars, coord_start_r, coord_right);
			ft_paint_down(vars, x, y);
			x++;
		}
		y++;
	}
}
