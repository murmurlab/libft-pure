/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbasara <ahbasara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:26:43 by ahbasara          #+#    #+#             */
/*   Updated: 2022/12/09 15:26:43 by ahbasara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * This work © 2023 by murmurlab is licensed under CC BY-SA 4.0. To view a copy 
 * of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
