/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isolate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:10:07 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/03 15:35:34 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fdf.h"
#include "../Libft/libft.h"

int	ft_has_comma(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ',')
			return (1);
		i++;
	}
	return (0);
}

void	ft_map_coords(char **tmp, int x, int y, t_vars *vars)
{
	char	**tmp1;

	vars->map.coords[y][x].x = x;
	vars->map.coords[y][x].y = y;
	if (ft_has_comma(tmp[x]))
	{
		tmp1 = ft_split(tmp[x], ',');
		vars->map.coords[y][x].z = ft_atoi(tmp1[0]);
		vars->map.coords[y][x].color = strtol(tmp1[1], NULL, 16);
		free(tmp1[0]);
		free(tmp1[1]);
	}
	else
		vars->map.coords[y][x].z = ft_atoi(tmp[x]);
}

void	ft_isolate(char *aux, t_vars *vars, int y)
{
	char	**tmp;
	int		x;

	tmp = ft_split(aux, ' ');
	x = 0;
	vars->map.coords[y] = (t_coords *) malloc(vars->map.width
			* sizeof(t_coords));
	while (tmp[x])
	{
		ft_map_coords(tmp, x, y, vars);
		free(tmp[x++]);
	}
	vars->map.x_max = x - 1;
	free(tmp);
}
