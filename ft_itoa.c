/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stritoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fculator <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:23:25 by fculator          #+#    #+#             */
/*   Updated: 2019/09/13 15:02:07 by fculator         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(int n, int sign)
{
	int l;

	l = 1;
	while (n / 10 != 0)
	{
		l++;
		n /= 10;
	}
	return (l + sign);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	sign = (n < 0) ? 1 : 0;
	len = ft_len(n, sign);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	while (len >= sign)
	{
		if (sign)
			str[len--] = (n % 10 * -1) + '0';
		else
			str[len--] = n % 10 + '0';
		n /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
