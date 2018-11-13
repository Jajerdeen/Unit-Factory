/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:44:43 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/07 21:44:45 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_itoa_wrapper(long int n)
{
	char			*s;
	size_t			i;
	const size_t	len = ft_intlen(n);
	const _Bool		isneg = (n < 0) ? 1 : 0;

	if (isneg != 0)
		n = -n;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == 0)
		return (0);
	i = 0;
	s = s + len;
	*s = '\0';
	while (++i <= len)
	{
		*--s = (n % 10) | '0';
		n /= 10;
	}
	if (isneg != 0)
		*s = '-';
	return (s);
}

char			*ft_itoa(int n)
{
	return (ft_itoa_wrapper(n));
}
