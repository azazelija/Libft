/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fculator <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:18 by fculator          #+#    #+#             */
/*   Updated: 2019/09/13 17:05:56 by fculator         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	ptr = (char*)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (ptr != NULL)
	{
		while (s[i])
		{
			ptr[i] = (*f)(s[i]);
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}
