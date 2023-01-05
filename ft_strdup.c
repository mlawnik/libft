/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:07:37 by mlawnik           #+#    #+#             */
/*   Updated: 2023/01/05 13:14:32 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	s_len;
	char			*ptr;

	s_len = ft_strlen(s1) + 1;
	ptr = (char *) malloc(s_len);
	if (ptr)
	{
		ft_strlcpy(ptr, s1, s_len);
		return (ptr);
	}
	return (0);
}
