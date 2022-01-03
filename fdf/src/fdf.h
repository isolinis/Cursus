/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:56:44 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/03 17:49:47 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

typedef struct s_coords
{
	int	x;
	int	y;
	int	min_x;
	int	min_y;
	int	z;
	int	color;
}	t_coords;

typedef struct s_map
{
	int			width;
	int			height;
	t_coords	**coords;
	int			x_max;
	int			y_max;
	int			x_start;
	int			y_start;
	int			scale;
	int			angle;
}	t_map;

typedef struct s_vars
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		x;
	int		y;
	int		xi;
	int		yi;
	t_map	map;
}	t_vars;

void	ft_get_map(t_vars *vars, char *arg);
void	ft_store_contents(t_vars *vars, char *arg);
void	ft_genesis(t_vars *vars);
void	ft_paint(t_vars *vars);
void	ft_draw_image(t_vars *vars, int x, int y, int color);
void	ft_isometric(t_vars *vars, int p0[3], int p1[3]);
void	connect_switch(t_vars *vars, int p0[3], int p1[3]);
void	ft_get_distance(t_vars *vars, int i, int j);
char	*get_next_line(int fd);
char	*ft_empty_str(char *str);
int		ft_strlen(char *s, int c);
int		ft_is_line_break(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, int start, int len);
char	*ft_substr_bis(char *s, int start, int len);
void	ft_isolate(char *aux, t_vars *vars, int y);
void	ft_map_coords(char **tmp, int x, int y, t_vars *vars);
int		key_hook(int keycode, t_vars *vars);
int		close_win(t_vars *vars);

#endif
