/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 19:03:07 by jsolinis          #+#    #+#             */
/*   Updated: 2021/09/14 18:10:36 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

int		ft_strlen(char *s, int c);
int		ft_is_line_break(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_empty_str(char *str);
char	*ft_substr(char *s, int start, int len);
char	*ft_substr_bis(char *s, int start, int len);
char	*get_next_line(int fd);

#endif
