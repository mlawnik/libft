/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:51:22 by mlawnik           #+#    #+#             */
/*   Updated: 2023/01/03 13:27:34 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	x;
	char			*ptr;

	i = ft_strlen(s);
	x = (unsigned char) c;
	while (i >= 0)
	{
		if (s[i] == x)
		{
			ptr = (char *) &s[i];
			return (ptr);
		}
		i--;
	}
	return (0);
}
