/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:49:59 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/07 21:50:00 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		i;
	char	*dup;

	dup = (char*)s;
	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (dup + i);
	if (!c && s[i] == '\0')
		return (dup + i);
	return (0);
}
