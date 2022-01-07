/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:01:44 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/05 20:17:54 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "fdf.h"
#include "../mlx/mlx.h"
#include "../Libft/libft.h"

void	ft_genesis(t_vars *vars)
{
	if (vars->img)
		mlx_destroy_image(vars->mlx, vars->img);
	vars->img = mlx_new_image(vars->mlx, 1920, 1080);
	vars->addr = mlx_get_data_addr(vars->img,
			&vars->bits_per_pixel, &vars->line_length, &vars->endian);
	if (ft_strncmp(vars->file, "test_maps/mars.fdf", 19))
		ft_paint(vars);
	else
		ft_paint_mars(vars);
	mlx_put_image_to_window(vars->mlx, vars->win, vars->img, 0, 0);
}

int	main(int argc, char **argv)
{
	t_vars	vars;

	if (argc != 2)
		exit(0);
	ft_get_map(&vars, argv[1]);
	ft_store_contents(&vars, argv[1]);
		vars.mlx = mlx_init();
	if (vars.mlx == NULL)
		write(1, "Error de inicialización", 23);
	vars.win = mlx_new_window(vars.mlx, 1920, 1080, "FDF");
	if (vars.win == NULL)
		write(1, "Error de generación de ventana", 30);
	vars.map.x_start = 0;
	vars.map.y_start = 0;
	vars.map.scale = 10;
	vars.map.angle = 6;
	vars.file = argv[1];
	ft_genesis(&vars);
	mlx_key_hook(vars.win, key_hook, &vars);
	mlx_hook(vars.win, 17, 1L << 8, close_win, &vars);
	mlx_loop(vars.mlx);
	return (0);
}
