/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbasara <ahbasara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:06:59 by ahbasara          #+#    #+#             */
/*   Updated: 2023/12/22 23:56:03 by ahbasara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This work © 2023 by murmurlab is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/

#include <sys/_types/_size_t.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
	{
		while (n--)
			*(char *)(dest + n) = *(char *)(src + n);
	}
	else
		return (ft_memcpy(dest, src, n));
	return (dest);
}
