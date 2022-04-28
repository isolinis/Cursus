/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 19:01:27 by jsolinis          #+#    #+#             */
/*   Updated: 2022/04/28 19:50:44 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_find_nl(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n' || s[i] == '\0')
			return (1);
		i++;	
	}
	return (0);
}

char	*ft_add_ch(char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i])
		i++;
	str = (char *)malloc (i + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = c;
	str[i + 1] = '\0';
	free(s);
	return (str);
}

char 	*get_next_line(int fd)
{
	char *line;
	char buff;
	int bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = malloc (1);
	line[0] = '\0';
	bytes = 1;
	while(!(ft_find_nl(line)) && bytes != 0)
	{
		bytes = read(fd, &buff, 1);
		if (bytes == 0)
		{
			if (line[0] == '\0')
			{
				free(line);
				return (NULL);
			}
			return (line);
		}
		if (bytes == -1)
		{
			free(line);
			return (NULL);
		}
		line = ft_add_ch(line, buff);
	}
	return (line);
}
