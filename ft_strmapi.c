/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:24:18 by mlawnik           #+#    #+#             */
/*   Updated: 2023/01/19 13:29:17 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*substring;

	if (!s || !f)
		return (NULL);
	substring = (char *) malloc(ft_strlen(s) + 1);
	if (!substring)
		return (NULL);
	i = 0;
	while (s[i])
	{
		substring[i] = f(i, s[i]);
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
