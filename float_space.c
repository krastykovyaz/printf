/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_space.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleksandrkovazin <aleksandrkovazin@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 21:23:45 by aleksandrko       #+#    #+#             */
/*   Updated: 2020/04/21 21:24:40 by aleksandrko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		float_space(t_pr *stut)
{
	int	i;

	i = 0;
	if (stut->width && stut->width > stut->accuracy)
	{
		if (stut->fl > 0)
			i++;
		i = (stut->width - stut->len - i);
		if (i > 0)
		{
			ft_putnchar(' ', i, stut);
		}
	}
	if (stut->fl >= 0)
		ft_putchar(' ', stut);
	else
		ft_putchar('-', stut);
	convertf(stut);
	return (0);
}
