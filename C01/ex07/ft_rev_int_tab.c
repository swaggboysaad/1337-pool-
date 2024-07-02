/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:07:41 by szaoual           #+#    #+#             */
/*   Updated: 2024/06/30 08:26:38 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	x;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		x = tab[first];
		tab[first] = tab[last];
		tab[last] = x;
		first++;
		last--;
	}
}
