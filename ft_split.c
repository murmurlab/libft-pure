/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbasara <ahbasara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:26:10 by ahbasara          #+#    #+#             */
/*   Updated: 2023/12/22 23:56:19 by ahbasara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This work © 2023 by murmurlab is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/

#include <sys/_types/_null.h>
#include <sys/_types/_size_t.h>
#include <malloc/_malloc.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

static int	push_arr(const char *s, char **pp, size_t x, char c)
{
	const char	*tmp;
	char		*buff;
	const char	*stock;

	stock = s;
	tmp = 0;
	while (stock + x >= s)
	{
		if ((*s == c || (!*s && (*(s - 1) != c))) && tmp)
		{
			buff = malloc(sizeof(char) * ((s - tmp) + 1));
			if (!buff)
				return (1);
			ft_strlcpy(buff, tmp, ((s - tmp) + 1));
			*pp++ = buff;
			tmp = 0;
		}
		if (*s != c)
		{
			if (!tmp)
				tmp = s;
		}
		s++;
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	size_t	counter;
	size_t	elem_n;
	char	flag;
	char	**pp;

	counter = -1;
	elem_n = 0;
	flag = 0;
	while (s[++counter])
	{
		elem_n += ((s[counter] != 0) && (s[counter] != c)
				&& (flag ^ (s[counter] != c)));
		if (s[counter] != c)
			flag = 1;
		else
			flag = 0;
	}
	pp = malloc(sizeof(char *) * elem_n + 1);
	if (!pp)
		return (NULL);
	if (push_arr(s, pp, counter, c))
		return (free(pp), NULL);
	pp[elem_n] = 0;
	return (pp);
}
