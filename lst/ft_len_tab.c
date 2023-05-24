/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpupier <lpupier@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:30:30 by lpupier           #+#    #+#             */
/*   Updated: 2023/05/24 13:34:12 by lpupier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_len_tab(void **tab)
{
	int	idx;

	if (!tab)
		return (0);
	idx = 0;
	while (tab[idx] != NULL)
		idx++;
	return (idx);
}
