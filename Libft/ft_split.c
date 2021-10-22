/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 11:57:12 by jsolinis          #+#    #+#             */
/*   Updated: 2021/07/01 11:22:43 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_nbr_words(char const *s, char c)
{
	size_t	i;
	size_t	nbr;

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

static void	ft_fill_word(char *dst, char const *s, size_t start, size_t last)
{
	size_t	i;

	i = 0;
	while (start < last)
	{
		dst[i] = s[start];
		i++;
		start++;
	}
	dst[i] = '\0';
}

static void	*ft_free_mem(char **array, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static void	ft_do_split(char const *s, char c, char **array)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			array[j] = (char *) malloc(sizeof(char) * (i - start + 1));
			if (!array[j])
			{
				ft_free_mem(array, j);
				return ;
			}
			ft_fill_word(array[j], s, start, i);
			j++;
		}
		else if (s[i] != '\0')
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	n;

	if (!s)
		return (NULL);
	n = ft_get_nbr_words(s, c);
	array = (char **) malloc(sizeof(char *) * (n + 1));
	if (!array)
		return (NULL);
	array[n] = 0;
	if (n == 0)
		return (array);
	ft_do_split(s, c, array);
	return (array);
}
