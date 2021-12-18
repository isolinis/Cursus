/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 19:05:55 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/18 17:01:13 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "fdf.h"

char	*ft_empty_str(char *str)
{
	str = malloc(1);
	str[0] = '\0';
	return (str);
}

char	*get_next_line(int fd)
{
	char		buf[2];
	char		*line;
	static char	*rest;
	int			bytes;

	if (fd < 0)
		return (NULL);
	bytes = 1;
	while (!ft_is_line_break(rest) && bytes != 0)
	{
		bytes = read(fd, buf, 1);
		buf[bytes] = '\0';
		if (bytes == -1)
			return (NULL);
		rest = ft_strjoin(rest, buf);
	}
	line = ft_substr(rest, 0, ft_strlen(rest, '\n') + 1);
	rest = ft_substr_bis(rest, ft_strlen(line, '\0'),
			(ft_strlen(rest, '\0') - ft_strlen(line, '\0')));
	if (bytes == 0 && (ft_strlen(line, '\0') == 0))
	{
		free(line);
		return (NULL);
	}
	return (line);
}
