/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:13:00 by mlawnik           #+#    #+#             */
/*   Updated: 2023/01/12 19:27:51 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	void	*substring;
	void	*sub_pos;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	substring = malloc(s1_len + s2_len +1);
	if (!substring)
		return (0);
	ft_memcpy(substring, (const void *) s1, s1_len);
	sub_pos = &(((char *) substring)[s1_len]);
	ft_memcpy(sub_pos, (const void *) s2, s2_len);
	((char *) substring)[s1_len + s2_len] = '\0';
	return ((char *) substring);
}
