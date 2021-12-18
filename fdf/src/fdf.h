/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:56:44 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/18 23:30:47 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

typedef struct s_map
{
	int	width;
	int	height;
	int	**coords;
	int	x_max;
	int	y_max;
	int	x_start;
	int	y_start;
	int	scale;
	int	angle;
	int	color;
}	t_map;

typedef struct s_vars
{
	void	*mlx;
	void	*win;
	t_map	map;
}	t_vars;

void	ft_get_map(t_vars *vars, char *arg);
void	ft_store_contents(t_vars *vars, char *arg);
void	ft_paint(t_vars *vars);
int		ft_isometric_x(int x, int y);
int		ft_isometric_y(int x, int y, int z);
void	ft_bresenham_x(t_vars *vars, int x1, int x2, int y1, int y2);
void	ft_bresenham_y(t_vars *vars, int x1, int x2, int y1, int y2);
char	*get_next_line(int fd);
char	*ft_empty_str(char *str);
int		ft_strlen(char *s, int c);
int		ft_is_line_break(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, int start, int len);
char	*ft_substr_bis(char *s, int start, int len);
void	ft_isolate(char *aux, t_vars *vars, int y);
int		key_hook(int keycode, t_vars *vars);
int		close_win(t_vars *vars);

#endif
