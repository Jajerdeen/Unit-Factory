/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:48:29 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/07 21:48:31 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	const _Bool		isneg = (n < 0) ? 1 : 0;
	const size_t	l = ft_intlen(n) + 1;
	char			s[l];
	long int		num;
	size_t			len;

	num = (long int)n;
	len = l;
	if (isneg && (s[0] = '-'))
		num = -num;
	s[len - 1] = '\0';
	while ((--len != isneg) && (s[len - 1] = (num % 10) | '0'))
		num /= 10;
	ft_putstr_fd(s, fd);
}
