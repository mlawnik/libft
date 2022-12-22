/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:13:59 by mlawnik           #+#    #+#             */
/*   Updated: 2022/12/22 11:09:06 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	if (!dst && !src)
		return (0);
	if (len > 0)
	{
		i = 0;
		if (dst < src)
		{
			while (i < len)
			{
				((char *) dst)[i] = ((char *) src)[i];
				i++;
			}
		}
		else
		{
			while (i < len)
			{
				((char *) dst)[len - i - 1] = ((char *) src)[len - i - 1];
				i++;
			}
		}
	}
	return (dst);
}
