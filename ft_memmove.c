/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:47:20 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/07 21:47:22 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dc;
	const unsigned char	*s = src;

	if ((long long int)dst < (long long int)src)
		return (ft_memcpy(dst, src, len));
	dc = (unsigned char*)dst;
	i = len + 1;
	while (--i)
		dc[i - 1] = s[i - 1];
	return (dst);
}
