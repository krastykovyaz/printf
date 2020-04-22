/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:14:51 by ccharmai          #+#    #+#             */
/*   Updated: 2020/04/22 15:57:18 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

__int128_t	convert(t_pr *stut, int base)
{
	__int128_t		bin;
	__int128_t		k;
	long long int	i;

	bin = 0;
	k = 1;
	if (stut->a < 0)
		i = stut->a * (-1);
	else
		i = stut->a;
	while (i)
	{
		bin += (i % base) * k;
		k *= 10;
		i /= base;
	}
	return (bin);
}
