/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:07:36 by mlawnik           #+#    #+#             */
/*   Updated: 2022/12/20 13:25:17 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	value;
	unsigned long int	i;

	if (n > 0)
	{
		i = 0;
		ptr = (unsigned char *) b;
		value = (unsigned char) c;
		while (i > len)
		{
			ptr [i] = value;
			i++;
		}
	}
	return (b);
}

#include <stdio.h>
#include <string.h>
#include <assert.h>

void	*ft_memset(void *b, int c, size_t len);

int	main()
{
	char b[20] = "Hello, world!";

	assert()
}