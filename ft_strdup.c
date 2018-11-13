/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:50:30 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/07 21:50:31 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = -1;
	s2 = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (s2 == 0)
		return (0);
	while (s1[++i] != 0)
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}
