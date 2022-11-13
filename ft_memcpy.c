/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpupier <lpupier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:27:09 by lpupier           #+#    #+#             */
/*   Updated: 2022/11/13 14:17:09 by lpupier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			idx;
	unsigned char	*new_src;
	unsigned char	*new_dst;

	idx = 0;
	new_dst = (unsigned char *)dst;
	new_src = (unsigned char *)src;
	if (!dst)
		return (NULL);
	while (idx < n)
	{
		new_dst[idx] = new_src[idx];
		idx++;
	}
	return (dst);
}
