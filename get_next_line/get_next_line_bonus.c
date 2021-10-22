/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 19:05:55 by jsolinis          #+#    #+#             */
/*   Updated: 2021/09/20 15:10:02 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_empty_str(char *str)
{
	str = malloc(1);
	str[0] = '\0';
	return (str);
}

char	*get_next_line(int fd)
{
	char		buf[BUFFER_SIZE + 1];
	char		*line;
	static char	*rest[4096];
	int			bytes;

	if (fd < 0)
		return (NULL);
	bytes = 1;
	while (!ft_is_line_break(rest[fd]) && bytes != 0)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		buf[bytes] = '\0';
		if (bytes == -1)
			return (NULL);
		rest[fd] = ft_strjoin(rest[fd], buf);
	}
	line = ft_substr(rest[fd], 0, ft_strlen(rest[fd], '\n') + 1);
	rest[fd] = ft_substr_bis(rest[fd], ft_strlen(line, '\0'),
			(ft_strlen(rest[fd], '\0') - ft_strlen(line, '\0')));
	if (bytes == 0 && (ft_strlen(line, '\0') == 0))
	{
		free(line);
		return (NULL);
	}
	return (line);
}
