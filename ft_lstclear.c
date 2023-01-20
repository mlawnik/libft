/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:37:50 by mlawnik           #+#    #+#             */
/*   Updated: 2023/01/20 12:44:15 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*first_element;
	t_list	*next_element;

	if (lst && del)
	{
		next_element = *lst;
		while (next_element)
		{
			first_element = next_element;
			next_element = next_element->next;
			del(first_element->content);
			free(first_element);
		}
		*lst = NULL;
	}
}
