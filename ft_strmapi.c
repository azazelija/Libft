/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fculator <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:23:32 by fculator          #+#    #+#             */
/*   Updated: 2019/09/13 17:06:25 by fculator         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	ptr = (char*)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (ptr != NULL)
	{
		while (s[i])
		{
			ptr[i] = (*f)(i, s[i]);
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}
