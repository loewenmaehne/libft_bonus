/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzienert <jzienert@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:52:51 by jzienert          #+#    #+#             */
/*   Updated: 2025/07/26 17:04:28 by jzienert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

/**
 * @brief Returns last node of lst (t_list)
 *  
 * @param lst [in] The beginning of the list.
 * @return The last node in the t_list or NULL.
 * 
 * @warning 42 student.
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (NULL);
	last = lst;
	while (last->next != NULL)
		last = last->next;
	return (last);
}
