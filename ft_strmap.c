/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:51:40 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/07 21:51:42 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;

	if (s && f)
	{
		i = -1;
		str = (char *)malloc(sizeof(char) * ((ft_strlen(s)) + 1));
		if (str == 0)
			return (0);
		while (s[++i] != 0)
			str[i] = f(s[i]);
		str[i] = '\0';
		return (str);
	}
	return (0);
}
