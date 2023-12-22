/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbasara <ahbasara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 03:42:09 by codespace         #+#    #+#             */
/*   Updated: 2023/12/23 00:34:28 by ahbasara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * This work © 2023 by murmurlab is licensed under CC BY-SA 4.0. To view a copy 
 * of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst)
	{
		if (*alst)
			new->next = *alst;
		*alst = new;
	}
}
