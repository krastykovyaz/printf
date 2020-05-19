/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uns3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 09:24:51 by lnoisome          #+#    #+#             */
/*   Updated: 2020/05/19 09:30:23 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/printf.h"

int		type_uns_minus_u(t_pr *stut)
{
	int i;

	i = 0;
	if (stut->space)
		ft_putchar(' ', stut);
	if (stut->accuracy > stut->len)
	{
		if (stut->u == 0)
			i = stut->accuracy - stut->len + 1;
		else
			i = stut->accuracy - stut->len;
	}
	ft_putnchar('0', i, stut);
	if (stut->space)
		i++;
	if ((stut->u != 0) || (stut->u == 0 && stut->dot == 0))
	{
		ft_putnbr_u(convert_u(stut, 10), stut);
		i = stut->width - i - stut->len;
	}
	else
		i = stut->width - i;
	i > 0 ? ft_putnchar(' ', i, stut) : 0;
	return (0);
}

int		uns_space_p(t_pr *stut)
{
	int i;

	i = 0;
	if (stut->width > stut->len && stut->width > stut->accuracy)
	{
		if (stut->accuracy > stut->len)
		{
			if (stut->u == 0)
				i = stut->width - stut->accuracy - 1;
			else
				i = stut->width - stut->accuracy;
		}
		else
			i = stut->width - stut->len;
		if (stut->space)
			i--;
		if (stut->a == 0 && stut->dot == 1)
			i++;
		if (!stut->zero || stut->dot)
			ft_putnchar(' ', i, stut);
	}
	return (i);
}

int		uns_pzero(t_pr *stut)
{
	int i;

	i = 0;
	if ((stut->width > stut->len) || stut->space)
	{
		if (stut->accuracy >= stut->len)
			i = stut->width - stut->accuracy;
		else
			i = stut->width - stut->len;
		if (i >= 0)
		{
			if (stut->accuracy)
				ft_putnchar(' ', i, stut);
			else
				ft_putnchar('0', i, stut);
		}
		else if (stut->space)
			ft_putchar(' ', stut);
	}
	return (i);
}

int		type_uns_zero_u(t_pr *stut)
{
	int	i;

	i = 0;
	uns_pzero(stut);
	if (stut->accuracy >= stut->len)
	{
		i = stut->accuracy - stut->len;
		ft_putnchar('0', i, stut);
	}
	ft_putnbr_u(convert_u(stut, 10), stut);
	return (0);
}
