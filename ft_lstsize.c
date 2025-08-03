/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzienert <jzienert@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:55:28 by jzienert          #+#    #+#             */
/*   Updated: 2025/07/29 02:13:19 by jzienert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
/**
 * @brief Count number of nodes in lst (t_list)
 * 
 * @param lst [in] The beginning of the list.
 * @return Number of nodes in lst or 0 on NULL.
 * 
 * @note Counts first and every next node in lst until NULL is found.
 * @warning 42 student
 */
int	ft_lstsize(t_list *lst)
{
	int		len;

	if (!lst)
		return (0);
	len = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}
