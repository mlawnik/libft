/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlawnik <mlawnik@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:46:52 by mlawnik           #+#    #+#             */
/*   Updated: 2023/01/19 12:57:25 by mlawnik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		read_str(char const *s, char c);
static void				ft_create_sub(char const *s, char c, char **array);

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = (char **) malloc ((read_str(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	ft_create_sub(s, c, array);
	return (array);
}

static unsigned int	read_str(char const *s, char c)
{
	unsigned int	i;
	unsigned int	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
			i++;
			word_count++;
			i--;
		}
		i++;
	}
	return (word_count);
}

static void	ft_create_sub(char const *s, char c, char **array)
{
	unsigned int	i;
	unsigned int	start;
	unsigned int	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			array[word_count] = ft_substr(s, start, i - start);
			word_count++;
			i--;
		}
		i++;
	}
	array[word_count] = NULL;
}
