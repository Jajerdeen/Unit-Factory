/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:42:41 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/07 21:42:44 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	unsigned int	res;
	int				sign;
	size_t			i;

	res = 0;
	sign = 1;
	i = 0;
	while (ft_iswhitespace(str[i]) != 0)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' != 0)
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]) != 0)
	{
		res = res * 10 + str[i++] - '0';
	}
	return ((int)(res * sign));
}
