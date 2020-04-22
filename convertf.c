/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleksandrkovazin <aleksandrkovazin@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:16:10 by ccharmai          #+#    #+#             */
/*   Updated: 2020/04/22 08:22:17 by aleksandrko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	convertf(t_pr *stut)
{
	long long int	i;
	long long int	nb;
	__int128_t		f1;
	__int128_t		f2;

	i = (!stut->accuracy) ? 6 : stut->accuracy;
	if (stut->fl < 0)
		stut->fl *= (-1);
	if (stut->fl < 0 && nb == 0)
		ft_putchar('-', stut);
	nb = stut->fl;
	stut->fl = stut->fl - nb;
	f1 = stut->fl * afterdot(10, i);
	f2 = stut->fl * afterdot(10, (i + 1));
	if (f2 - f1 * 10 > 4)
		f1++;
	if ((ft_round(f1) != 9 && (int)(stut->fl * 10) == 9) || \
	(stut->dot && !stut->accuracy && ft_round(f1) > 4))
	{
		f1 = 0;
		if (stut->fl_save < 0)
			nb -= 1;
		nb += 1;
	}
	ft_float(nb, f1, i, stut);
}
