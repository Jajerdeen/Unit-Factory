/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:53:34 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/07 21:53:36 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_get_word(const char *str, size_t *start_iter, char c)
{
	char	*word;
	int		i;

	if (!(word = (char *)malloc(sizeof(char) * (ft_strlen(str)))))
		return (0);
	i = 0;
	while (str[*start_iter] != c && str[*start_iter])
	{
		word[i] = str[*start_iter];
		i++;
		*start_iter += 1;
	}
	word[i] = '\0';
	while (str[*start_iter] == c && str[*start_iter])
		*start_iter += 1;
	return (word);
}

static int	ft_split_count_str(char const *s, char c)
{
	unsigned int i;
	unsigned int str_cnt;

	i = 0;
	str_cnt = 0;
	if (s == 0)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			str_cnt++;
		i++;
	}
	if (s[0])
		str_cnt++;
	return (str_cnt);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	str_num;
	char	**alloc_arr;

	i = 0;
	j = 0;
	if (s == 0)
		return (0);
	str_num = ft_split_count_str(s, c);
	if (!(alloc_arr = (char **)malloc(sizeof(char *)
		* str_num + sizeof(char *))))
		return (0);
	while (s[i] == c && s[i])
		i++;
	while (j < str_num && s[i])
	{
		alloc_arr[j] = ft_get_word(s, &i, c);
		j++;
	}
	alloc_arr[j] = 0;
	return (alloc_arr);
}
