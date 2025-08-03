/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzienert <jzienert@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 17:06:48 by jzienert          #+#    #+#             */
/*   Updated: 2025/08/03 21:21:53 by jzienert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

/**
 * @brief Add a new node to the end of the list
 * 
 * @param lst [in, out] Pointer to list to add node to.
 * @param new [in] Node to be added to the back of the list.
 * 
 * @note lst can be NULL.
 * @warning 42 student
 * @see ft_lstadd_front()
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
