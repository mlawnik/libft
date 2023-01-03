/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:09:26 by mlawnik           #+#    #+#             */
/*   Updated: 2023/01/03 10:45:55 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*ptr;

	i = 0;
	x = (unsigned char) c;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		if (ptr[i] == x)
			return (&ptr[i]);
		i++;
	}
	return (0);
}
