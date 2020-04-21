/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_plus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleksandrkovazin <aleksandrkovazin@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 21:23:01 by aleksandrko       #+#    #+#             */
/*   Updated: 2020/04/21 21:23:25 by aleksandrko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		float_plus(t_pr *stut)
{
	int	i;

	i = 0;
	if (stut->width && stut->width > stut->accuracy)
	{
		if (stut->fl > 0)
			i += 1;
		i = stut->width - stut->len - i;
		if (i > 0)
			ft_putnchar(' ', i, stut);
	}
	if (stut->fl >= 0)
		ft_putchar('+', stut);
	else
	{
		ft_putchar('-', stut);
		stut->fl = -(stut->fl);
	}
	convertf(stut);
	return (0);
}
