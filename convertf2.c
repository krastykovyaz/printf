/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertf2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccharmai <5429549@mail.ru>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:22:04 by ccharmai          #+#    #+#             */
/*   Updated: 2020/04/21 20:22:14 by ccharmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "printf.h"

void	convertf2(t_pr *stut)
{
	long long int	nb;
	__int128_t		f1;
	__int128_t		f2;
	__int128_t		d;
	int				i;
	char			*s;
	int				k;

	if (!stut->accuracy)
		i = 6;
	else
		i = stut->accuracy;
	nb = stut->fl;
	if (stut->fl < 0 && nb == 0)
		ft_putchar('-', stut);
	stut->fl = stut->fl - nb;
	if (stut->fl < 0)
		stut->fl = -(stut->fl);
	s = ft_itoa2(f1);
	k = ft_strlen(s);
	free(s);
	f1 = stut->fl * afterdot(10, i);
	f2 = stut->fl * (afterdot(10, i + 1));
	d = f2 - f1 * 10;
	if (d > 4)
	{
		if  (f1 == 0 )
			f1++;
		else if (i == 19 && k != 18)
			f1=f1 ;
		else
			f1++;
	}
	if ((ft_round(f1) != 9 && (int)(stut->fl * 10) == 9) || ((stut->dot && !stut->accuracy && ft_round(f1) > 4)))
	{
		f1 = 0;
		if (stut->fl_save > 0)
			nb++;
		else
			nb--;
	}
	ft_putnbr(nb, stut);
	if (stut->dot == 0 || (stut->dot != 0 && stut->accuracy != 0))
	{
		ft_putchar('.', stut);
		s = ft_itoa2(f1);
		k = ft_strlen(s);
		free(s);
		if ((i - k) > 0)
			ft_putnchar('0', i - k, stut);
		ft_putnbr(f1, stut);
	}
	else if (stut->grid)
	    ft_putchar('.', stut);
}
