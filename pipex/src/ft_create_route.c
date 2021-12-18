/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_route.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:28:27 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/07 22:55:16 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "pipex.h"
#include "../Libft/libft.h"

static int	ft_get_nbr_words(char const *s, char c)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			nbr++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else if (s[i] != '\0')
			i++;
	}
	return (nbr);
}

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

char	*ft_create_route(char **envp)
{
	char	*path;
	int		i;

	i = 0;
	path = NULL;
	path = ft_find_path(path, envp);
	path = ft_substr(path, 5, ft_strlen(path));
	return (path);
}

char	**ft_get_routes(char *path)
{
	char	**paths;
	int		i;

	i = 0;
	paths = ft_split(path, ':');
	paths[ft_get_nbr_words(path, ':')] = NULL;
	free(path);
	while (paths[i])
	{
		path = ft_strjoin(paths[i], "/");
		free(paths[i]);
		paths[i] = path;
		i++;
	}
	return (paths);
}

char	**ft_get_com_routes(char *arg, char **routes)
{
	char	**args;
	char	*route;
	int		i;

	i = 0;
	args = ft_split(arg, ' ');
	while (routes[i])
	{
		route = ft_strjoin(routes[i], args[0]);
		free(routes[i]);
		routes[i] = route;
		i++;
	}
	ft_free_array(args);
	return (routes);
}
