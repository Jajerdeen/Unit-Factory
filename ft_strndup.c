/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:52:44 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/07 21:52:45 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * (n + 1));
	if (str == 0)
		return (0);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}
