/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_addchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:41:21 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/13 16:41:23 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_addchar(char const *s1, char c)
{
	const size_t	len = ft_strlen(s1);
	char			*new;
	size_t			i;

	if ((s1 && c) == 0)
		return (0);
	new = ft_strnew(len + 1);
	if (!new)
		return (0);
	i = -1;
	while (++i < len)
		*(new + i) = *(s1 + i);
	*(new + i) = c;
	return (new);
}
