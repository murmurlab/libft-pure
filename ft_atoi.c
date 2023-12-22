/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbasara <ahbasara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:21:37 by codespace         #+#    #+#             */
/*   Updated: 2023/12/23 00:34:50 by ahbasara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * This work © 2023 by murmurlab is licensed under CC BY-SA 4.0. To view a copy 
 * of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 */
int	ft_atoi(const char *str)
{
	int	is_neg;
	int	res;

	is_neg = 1;
	while (((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	if (*str == '-')
		is_neg = -1;
	if ((is_neg == -1 || *str == '+') && str++)
		;
	res = 0;
	while (*str >= '0' && *str <= '9')
		res = (res * 10) + (*str++ - '0');
	return (res * is_neg);
}
