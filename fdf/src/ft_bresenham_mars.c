/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bresenham.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:14:40 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/05 19:58:50 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fdf.h"
#include "../mlx/mlx.h"

void	ft_paint_down_mars(t_vars *vars, int x, int y)
{
	int	coord_start_d[3];
	int	coord_down[3];

	if (y < vars->map.y_max - 2)
	{
		coord_start_d[0] = vars->map.coords[y][x].x;
		coord_start_d[1] = vars->map.coords[y][x].y;
		coord_start_d[2] = vars->map.coords[y][x].z;
		coord_down[0] = vars->map.coords[y + 1][x].x;
		coord_down[1] = vars->map.coords[y + 1][x].y;
		coord_down[2] = vars->map.coords[y + 1][x].z;
		ft_isometric(vars, coord_start_d, coord_down);
	}
}

void	ft_paint_mars(t_vars *vars)
{
	int	coord_start_r[3];
	int	coord_right[3];

	vars->y = 0;
	while (vars->y < vars->map.y_max)
	{
		vars->x = 0;
		while (vars->x < vars->map.x_max)
		{
			if (vars->x < vars->map.x_max - 2)
			{
				coord_start_r[0] = vars->map.coords[vars->y][vars->x].x;
				coord_start_r[1] = vars->map.coords[vars->y][vars->x].y;
				coord_start_r[2] = vars->map.coords[vars->y][vars->x].z;
				coord_right[0] = vars->map.coords[vars->y][vars->x + 1].x;
				coord_right[1] = vars->map.coords[vars->y][vars->x + 1].y;
				coord_right[2] = vars->map.coords[vars->y][vars->x + 1].z;
				ft_isometric(vars, coord_start_r, coord_right);
			}
			ft_paint_down_mars(vars, vars->x, vars->y);
			vars->x++;
		}
		vars->y++;
	}
}
