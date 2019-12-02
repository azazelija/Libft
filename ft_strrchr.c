/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fculator <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:38:37 by fculator          #+#    #+#             */
/*   Updated: 2019/09/07 14:41:53 by fculator         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *lpos;

	lpos = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			lpos = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	else
		return (lpos);
}
