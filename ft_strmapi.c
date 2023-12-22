/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbasara <ahbasara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 04:44:34 by ahbasara          #+#    #+#             */
/*   Updated: 2023/12/22 23:56:42 by ahbasara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This work © 2023 by murmurlab is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/

#include <sys/_types/_null.h>
#include <malloc/_malloc.h>

size_t	ft_strlen(const char *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s || !f || !new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = 0;
	return (new);
}
