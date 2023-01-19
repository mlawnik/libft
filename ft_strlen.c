/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:13:12 by mlawnik           #+#    #+#             */
/*   Updated: 2023/01/18 17:37:10 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	strlen;

	strlen = 0;
	while (s[strlen])
	strlen++;
	return (strlen);
}

//  #include <stdio.h>

//  int	main(void)
//  {
//  	char	*str;

//  	str = "bark";

//  	printf("%zu", ft_strlen(str));
//  	return (0);
//  }
