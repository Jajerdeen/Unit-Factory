/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:46:45 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/07 21:46:47 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s = (char*)src;

	i = 0;
	d = (char*)dst;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
