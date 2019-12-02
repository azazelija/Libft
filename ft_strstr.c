/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fculator <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:42:16 by fculator          #+#    #+#             */
/*   Updated: 2019/09/07 14:44:03 by fculator         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	const char *s11;
	const char *s22;

	if (*s2 == '\0')
		return ((char*)s1);
	while (*s1 != '\0')
	{
		s11 = s1;
		s22 = s2;
		while (*s22 != '\0' && *s11 == *s22)
		{
			s11++;
			s22++;
		}
		if (*s22 == '\0')
			return ((char*)s1);
		s1++;
	}
	return (NULL);
}
