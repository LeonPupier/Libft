/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpupier <lpupier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:04:07 by lpupier           #+#    #+#             */
/*   Updated: 2022/11/11 16:53:58 by lpupier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_c_in_s(char *set, char c)
{
	int	idx;

	idx = 0;
	while (set[idx])
	{
		if (set[idx] == c)
			return (1);
		idx++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_new_s1;
	size_t	idx;
	size_t	start_new_s1;
	char	*new_s1;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	len_new_s1 = ft_strlen(s1);
	idx = 0;
	while (s1[idx] && ft_check_c_in_s((char *)set, s1[idx]))
	{
		len_new_s1--;
		idx++;
	}
	start_new_s1 = idx;
	idx = ft_strlen(s1) - 1;
	while (s1[idx] && ft_check_c_in_s((char *)set, s1[idx]))
	{
		len_new_s1--;
		idx--;
	}
	new_s1 = ft_substr(s1, start_new_s1, len_new_s1);
	return (new_s1);
}
