/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:09:02 by mlawnik           #+#    #+#             */
/*   Updated: 2023/01/19 15:16:00 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	output[12];
	long	tmp;
	int		i;
	int		sign;

	output[11] = '\0';
	i = 10;
	sign = 1;
	if (n < 0)
		sign = -1;
	tmp = (long) n * sign;
	while (tmp > 9)
	{
		output[i] = (char)(tmp % 10) + '0';
		tmp = tmp / 10;
		i--;
	}
	output[i] = (char)(tmp % 10) + '0';
	if (sign == -1)
	{
		i--;
		output[i] = '-';
	}
	ft_putstr_fd(&output[i], fd);
}
