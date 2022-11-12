/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpupier <lpupier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:44:05 by lpupier           #+#    #+#             */
/*   Updated: 2022/11/11 10:55:26 by lpupier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

size_t	ft_count_itoa(int n)
{
	size_t	count;
	size_t	sign;

	count = 0;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	if (sign == 1)
		return (count);
	else
		return (count + 1);
}

char	*ft_convert_itoa(char *str, int n, size_t count)
{
	size_t	idx;

	idx = count - 1;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[idx] = ((n % 10) + 48);
		n /= 10;
		idx--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	count;
	char	*str;

	if (n == 0)
		return ("0");
	else if (n == -2147483648)
		return ("-2147483648");
	count = ft_count_itoa(n);
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = '\0';
	str = ft_convert_itoa(str, n, count);
	return (str);
}
