/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:55:06 by mlawnik           #+#    #+#             */
/*   Updated: 2023/01/20 19:28:36 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void	*substring;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start + len >= s_len)
		len = s_len - start;
	if (len > s_len)
		substring = malloc(s_len + 1);
	else
		substring = malloc(len + 1);
	if (!substring)
		return (NULL);
	if (start <= s_len)
	{
		ft_strlcpy((char *) substring, &s[start], len + 1);
		return ((char *) substring);
	}
	((char *) substring)[0] = '\0';
	return ((char *) substring);
}
