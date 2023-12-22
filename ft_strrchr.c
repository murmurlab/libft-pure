/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbasara <ahbasara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 02:21:21 by codespace         #+#    #+#             */
/*   Updated: 2023/12/23 00:34:50 by ahbasara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * This work © 2023 by murmurlab is licensed under CC BY-SA 4.0. To view a copy 
 * of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 */
#include <sys/_types/_null.h>
#include <sys/_types/_size_t.h>

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len--)
	{
		if (s[len] == (char)c)
			return ((char *)(s + len));
	}
	if ((char)c == '\0')
		return ((char *)(s + ft_strlen(s)));
	return (NULL);
}
