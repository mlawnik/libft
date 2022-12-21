/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:21:23 by mlawnik           #+#    #+#             */
/*   Updated: 2022/12/20 16:09:35 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	ft_memset(b, 0, len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	buffer[10];

// 	strcpy(buffer, "hello");
// 	printf("Before bzero: %s\n", buffer);
// 	bzero(buffer, sizeof(buffer));
// 	printf("After bzero: %s\n", buffer);
// 	return (0);
// }
