/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:53:57 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/07 21:53:59 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	*str;

	if (!s)
		return (0);
	i = 0;
	n = -1;
	while (ft_iswhitespace(s[i]))
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
	j = ft_strlen(s) - 1;
	while (ft_iswhitespace(s[j]))
		j--;
	if (!(str = (char *)malloc(sizeof(char) * (j - i + 2))))
		return (0);
	while (++n < j - i + 1)
		str[n] = s[i + n];
	str[n] = '\0';
	return (str);
}
