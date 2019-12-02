/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fculator <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:43:43 by fculator          #+#    #+#             */
/*   Updated: 2019/09/13 17:13:36 by fculator         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*elem;

	if (!lst || !f)
		return (NULL);
	tmp = ft_lstnew(f(lst)->content, f(lst)->content_size);
	if (!tmp)
		return (NULL);
	elem = tmp;
	lst = lst->next;
	while (lst)
	{
		elem->next = ft_lstnew(f(lst)->content, f(lst)->content_size);
		if (!elem->next)
			return (NULL);
		elem = elem->next;
		lst = lst->next;
	}
	return (tmp);
}
