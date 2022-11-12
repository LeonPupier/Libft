/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpupier <lpupier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:43:36 by lpupier           #+#    #+#             */
/*   Updated: 2022/11/11 11:51:28 by lpupier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		idx;
	int		size;
	char	*new_s;

	if (!s)
		return (NULL);
	idx = 0;
	size = ft_strlen(s);
	new_s = malloc(sizeof(char) * size);
	while (new_s[idx])
	{
		new_s[idx] = (*f)(idx, (char)&s[idx]);
	}
	new_s[size] = '\0';
	return (new_s);
}
