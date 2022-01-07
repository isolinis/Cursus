/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_events.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:08:34 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/05 20:17:45 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fdf.h"
#include "../mlx/mlx.h"

int	ft_move_img(int keycode, t_vars *vars)
{
	if (keycode == 124)
		vars->map.x_start += 10;
	else if (keycode == 123)
		vars->map.x_start -= 10;
	else if (keycode == 125)
		vars->map.y_start += 10;
	else if (keycode == 126)
		vars->map.y_start -= 10;
	else if (keycode == 34)
		vars->map.scale += 5;
	else if (keycode == 31)
		vars->map.scale -= 5;
	else if (keycode == 45)
		vars->map.angle += 1;
	else if (keycode == 46)
		vars->map.angle -= 1;
	ft_genesis(vars);
	return (0);
}

int	key_hook(int keycode, t_vars *vars)
{
	if (keycode == 53)
	{
		mlx_destroy_window(vars -> mlx, vars -> win);
		exit(0);
	}
	else if (keycode == 123 || keycode == 124
		|| keycode == 125 || keycode == 126
		|| keycode == 34 || keycode == 31
		|| keycode == 45 || keycode == 46)
		ft_move_img(keycode, vars);
	return (0);
}
