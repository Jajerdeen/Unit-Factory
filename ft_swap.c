/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhelezn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:22:56 by mzhelezn          #+#    #+#             */
/*   Updated: 2018/11/09 19:22:58 by mzhelezn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(const void **x, const void **y)
{
	*x = (const void*)((uintptr_t) * x ^ (uintptr_t) * y);
	*y = (const void*)((uintptr_t) * y ^ (uintptr_t) * x);
	*x = (const void*)((uintptr_t) * x ^ (uintptr_t) * y);
}
