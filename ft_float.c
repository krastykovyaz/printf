/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccharmai <5429549@mail.ru>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:30:17 by ccharmai          #+#    #+#             */
/*   Updated: 2020/04/21 20:30:53 by ccharmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  "printf.h"

void	ft_float(long long nb, __int128_t n, long long i, t_pr *stut)
{
	char	*s;

	if (!stut->dot || (stut->dot && stut->accuracy))
	{
		ft_putchar('.', stut);
		s = ft_itoa2(n);
		nb = ft_strlen(s);
		if ((i - nb) > 0)
			ft_putnchar('0', i - nb, stut);
		ft_putnbr(n, stut);
		free(s);
	}
	else if (stut->grid)
		ft_putchar('.', stut);
}
