/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzienert <jzienert@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:13:44 by jzienert          #+#    #+#             */
/*   Updated: 2025/07/27 00:41:58 by jzienert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

/**
 * @brief Add new node at the beginning of lst (t_list)
 * 
 * @param lst [in, out] The beginning of the list.
 * @param new [in, out] The node to be set to the beginning of lst.
 * 
 * @note lst can be NULL.
 * @warning 42 student
 * @see ft_lstadd_back()
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
