/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:01:21 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/11 12:57:51 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

typedef struct s_data
{
	char	**routes1;
	char	**routes2;
	char	**cmd1;
	char	**cmd2;
	char	*path1;
	char	*path2;
	int		fd1;
	int		fd2;
}	t_data;

void		ft_error_mgt(int code);
char		*ft_cmd_exist(char **routes);
int			ft_infile_check(int fd, char *arg);
int			ft_outfile_check(int fd, char *arg);
void		ft_create_pipe(t_data data, char **envp);
void		ft_free_array(char **array);
void		ft_free_struct(t_data data);
char		*ft_create_route(char **envp);
char		**ft_get_routes(char *path);
char		**ft_get_com_routes(char *arg, char **routes);
void		check_leaks(void);

#endif
