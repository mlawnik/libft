/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:18:09 by mlawnik           #+#    #+#             */
/*   Updated: 2023/01/20 18:13:14 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*ptr_dst;
	const char	*ptr_src;
	size_t		i;

	if (!dst && !src)
		return (0);
	if (n > 0)
	{
		i = 0;
		ptr_dst = (char *) dst;
		ptr_src = (const char *) src;
		while (i < n)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}
