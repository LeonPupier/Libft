/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpupier <lpupier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:06:37 by lpupier           #+#    #+#             */
/*   Updated: 2022/11/11 14:47:07 by lpupier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	while (s1 && s2)
	{
		if (s1[idx] == s2[idx] && idx < n)
			idx++;
		else
		{
			if (idx < n)
				return (s1[idx] - s2[idx]);
			return (0);
		}
	}
	return (0);
}
