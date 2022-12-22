/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:19:39 by mlawnik           #+#    #+#             */
/*   Updated: 2022/12/22 15:19:51 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize > 0)
	{
		dstsize--;
		while (src[i] != '\0' && i < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char dst[6];
// 	char *src = "Hello";
// 	size_t dstsize = 6;

// 	printf("Expected output: %ld\n", strlcpy(dst, src, dstsize));
// 	printf("ft_strlcpy output: %ld\n", ft_strlcpy(dst, src, dstsize));
// 	printf("dst after strlcpy: %s\n", dst);

// 	return 0;
// }
