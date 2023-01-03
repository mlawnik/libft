/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:19:08 by mlawnik           #+#    #+#             */
/*   Updated: 2023/01/03 16:56:32 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;
	char	*ptr;

	i = 0;
	needle_len = ft_strlen(needle);
	ptr = (char *) haystack;
	if (needle_len > ft_strlen(haystack))
		return (0);
	if (needle_len == 0)
		return (&ptr[i]);
	while (i + needle_len <= len)
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
				return (&ptr[i]);
		}
		i++;
	}
	return (0);
}
