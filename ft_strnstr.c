/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fculator <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:50:25 by fculator          #+#    #+#             */
/*   Updated: 2019/09/11 16:00:54 by fculator         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t hlen)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (j < hlen && haystack[j])
	{
		while (needle[i] != '\0' && needle[i] == haystack[j + i] &&
				haystack[j] != '\0' && (i + j) < hlen)
		{
			i++;
		}
		if (needle[i] == '\0')
			return ((char *)&haystack[j]);
		i = 0;
		j++;
	}
	if (!needle[0])
		return ((char *)&haystack[j]);
	return (0);
}
