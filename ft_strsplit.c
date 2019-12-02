/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fculator <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:57:34 by fculator          #+#    #+#             */
/*   Updated: 2019/09/13 16:15:10 by fculator         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		words_number(char const *str, char c)
{
	int	i;
	int	count;

	if (str[0] == '\0')
		return (0);
	count = 0;
	if (str[0] != c)
		count++;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i - 1] == c && str[i] != c)
			count++;
		i++;
	}
	return (count);
}

static int		word_len(const char *str, char c)
{
	int len;

	len = 0;
	while (str[len] != '\0' && str[len] != c)
		len++;
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		words;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	words = words_number(s, c);
	array = (char**)malloc(sizeof(char*) * (words + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < words)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		array[i] = ft_strsub(s, j, word_len(&s[j], c));
		while (s[j] != '\0' && s[j] != c)
			j++;
		i++;
	}
	array[i] = NULL;
	return (array);
}
