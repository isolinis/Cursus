/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:01:21 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/04 21:09:30 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

typedef struct s_data
{
	char	**cmd1;
	char	**cmd2;
	char	*path1;
	char	*path2;
	int		fd1;
	int		fd2;
}	t_data;

void	ft_error_mgt(int code);
char	*ft_cmd_exist(char *arg, char **envp);
int		ft_infile_check(int fd, char *arg);
int		ft_outfile_check(int fd, char *arg);
void	ft_create_pipe(t_data data, char **envp);

#endif
