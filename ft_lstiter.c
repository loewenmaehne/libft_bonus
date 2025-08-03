/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzienert <jzienert@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:32:58 by jzienert          #+#    #+#             */
/*   Updated: 2025/07/27 19:44:02 by jzienert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

/**
 * @brief Apply a function to each nodes content
 * 
 * @param lst [in,out] List to apply function to.
 * @param f [in] Function to apply to all nodes content.
 * 
 * @note Function f gets applied to the content of lst and all following nodes.
 * @warning 42 student
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
