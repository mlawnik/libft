/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:01:11 by mlawnik           #+#    #+#             */
/*   Updated: 2023/01/20 18:12:42 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i_dst;
	size_t	i_src;
	size_t	src_len;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i_dst = dst_len;
	i_src = 0;
	while (src[i_src] && i_src < (dstsize - dst_len - 1) && dst_len < dstsize)
	{
		dst[i_dst] = src[i_src];
		i_dst++;
		i_src++;
	}
	dst[i_dst] = '\0';
	if (dstsize < dst_len)
		return (dstsize + src_len);
	else
		return (dst_len + src_len);
}
