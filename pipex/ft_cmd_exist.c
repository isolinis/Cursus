/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_exist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:40:39 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/03 20:24:19 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../Libft/libft.h"

char	*ft_find_path(char *env_path, char **envp)
{
	int	i;

	i = 0;
	while (envp[i])
	{
		if (ft_strncmp(envp[i], "PATH", 4) == 0)
			env_path = envp[i];
		i++;
	}
	return (env_path);
}

char	*ft_cmd_exist(char *arg, char **envp)
{
	char	*env_path;
	char	**pos_path;
	char	*path;
	int		i;

	i = 0;
	path = NULL;
	env_path = ft_find_path(env_path, envp);
	env_path = ft_substr(env_path, 5, ft_strlen(env_path));
	pos_path = ft_split(env_path, ':');
	while (pos_path[i])
	{
		pos_path[i] = ft_strjoin(pos_path[i], "/");
		if (access(ft_strjoin(pos_path[i], arg), F_OK) == 0)
			path = ft_strjoin(pos_path[i], arg);
		i++;
	}
	return (path);
}
