/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbasara <ahbasara@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:58:45 by codespace         #+#    #+#             */
/*   Updated: 2023/12/23 00:34:50 by ahbasara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * This work © 2023 by murmurlab is licensed under CC BY-SA 4.0. To view a copy 
 * of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 */
#include <sys/_types/_null.h>
#include <malloc/_malloc.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elt;

	elt = (t_list *)malloc(sizeof(t_list));
	if (elt == NULL)
		return (NULL);
	elt->content = content;
	elt->next = NULL;
	return (elt);
}
