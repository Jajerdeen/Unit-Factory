/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:45:38 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/07 21:45:40 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlist;

	if (lst != 0 && f != 0)
	{
		newlist = f(lst);
		if (newlist != 0 && lst->next != 0)
			newlist->next = ft_lstmap(lst->next, f);
		return (newlist);
	}
	return (0);
}
