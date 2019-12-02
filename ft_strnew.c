/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fculator <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:37:55 by fculator          #+#    #+#             */
/*   Updated: 2019/09/11 14:37:51 by fculator         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void	*ptr;

	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size + 1);
	return (ptr);
}
