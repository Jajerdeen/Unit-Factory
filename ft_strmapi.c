/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:52:01 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/07 21:52:05 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (s && f)
	{
		i = -1;
		str = (char*)malloc(sizeof(char) * ((ft_strlen(s)) + 1));
		if (str == 0)
			return (0);
		while (s[++i] != 0)
			str[i] = f(i, s[i]);
		str[i] = '\0';
		return (str);
	}
	return (0);
}
