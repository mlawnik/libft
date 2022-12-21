/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:18:09 by mlawnik           #+#    #+#             */
/*   Updated: 2022/12/20 17:03:08 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ret;

	ret = dst;
	if (n > 0)
	{
		while (n--)
			*(unsigned char *) dst++ = *(unsigned char *) src++;
		return (ret);
	}
}

// int	main(void)
// {
// 	char	str1[];
// 	char	str2[6];

// 	str1 = "Hello";

// 	memcpy(str2 str1, 5);
// 	str[2] = '\0';
// 	printf("str2: %s\n", str2);
// }
