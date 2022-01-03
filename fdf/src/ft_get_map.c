/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:34:26 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/03 17:17:46 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "fdf.h"
#include "../Libft/libft.h"
#include "../mlx/mlx.h"

int	close_win(t_vars *vars)
{
	mlx_destroy_window(vars -> mlx, vars -> win);
	exit(0);
}

void	ft_get_map(t_vars *vars, char *arg)
{
	char	*aux;
	int		i;
	int		fd;

	i = 0;
	fd = open(arg, O_RDONLY);
	if (fd < 0)
		exit(0);
	aux = get_next_line(fd);
	vars->map.width = ft_strlen(aux, '\n');
	while (aux != NULL)
	{
		i++;
		free(aux);
		aux = get_next_line(fd);
	}
	free(aux);
	vars->map.height = i;
	close(fd);
}

void	ft_store_contents(t_vars *vars, char *arg)
{
	char	*aux;
	int		y;
	int		fd;

	y = 0;
	fd = open(arg, O_RDONLY);
	if (fd < 0)
		exit(0);
	vars->map.coords = (t_coords **) malloc (vars->map.height
			* sizeof(t_coords *));
	while (y < vars->map.height)
	{
		aux = get_next_line(fd);
		ft_isolate(aux, vars, y++);
		free(aux);
	}
	vars->map.y_max = y - 1;
	close(fd);
}
