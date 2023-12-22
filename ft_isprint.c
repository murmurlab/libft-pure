/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbasara <ahbasara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:27:22 by ahbasara          #+#    #+#             */
/*   Updated: 2022/12/09 15:27:22 by ahbasara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This work © 2023 by murmurlab is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
