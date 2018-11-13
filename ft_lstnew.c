/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:46:00 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/07 21:46:02 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (0);
	if (content == 0)
	{
		new->content = 0;
		new->content_size = 0;
	}
	else
	{
		if (!(new->content = malloc(content_size)))
			return (0);
		ft_memmove(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = 0;
	return (new);
}
