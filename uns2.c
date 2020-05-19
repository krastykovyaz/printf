/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uns2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 09:13:22 by lnoisome          #+#    #+#             */
/*   Updated: 2020/05/19 10:55:26 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/printf.h"

int		type_uns_plus_u(t_pr *stut)
{
	int i;

	i = uns_space_p(stut);
	if (stut->zero && !stut->dot)
		ft_putnchar('0', i, stut);
	if (stut->accuracy > stut->len)
	{
		if (stut->u == 0)
		{
			i = stut->accuracy - stut->len + 1;
		}
		else
			i = stut->accuracy - stut->len;
		if (i > 0)
			ft_putnchar('0', i, stut);
	}
	if (stut->u != 0 || (stut->u == 0 && stut->dot == 0))
		ft_putnbr_u(convert_u(stut, 10), stut);
	return (0);
}

int		uns_preg_space(t_pr *stut)
{
	int	i;

	i = 0;
	if (stut->width > stut->len)
	{
		if (stut->width > stut->accuracy)
		{
			if (stut->accuracy > stut->len)
				i = stut->width - stut->accuracy;
			else
				i = stut->width - stut->len;
			if (stut->a < 0 && stut->accuracy >= stut->len)
				i--;
			ft_putnchar(' ', i, stut);
		}
	}
	return (i);
}

int		type_uns_regular(t_pr *stut)
{
	int i;

	i = uns_preg_space(stut);
	if (stut->accuracy >= stut->len)
	{
		i = stut->accuracy - stut->len;
		ft_putnchar('0', i, stut);
	}
	if (stut->u != 0 || (stut->u == 0 && stut->accuracy > 1))
	{
		if (stut->u == -1 * 9223372036854775808ull)
			ft_putstr("9223372036854775808", stut);
		else
			ft_putnbr_u(convert_u(stut, 10), stut);
	}
	if (stut->u == 0)
	{
		if (stut->width >= 0 && stut->accuracy == 0 && stut->dot == 0)
			ft_putchar('0', stut);
		else if (stut->width != 0 && stut->accuracy == 0 && stut->dot == 1)
			ft_putchar(' ', stut);
	}
	return (0);
}

void	type_uns_priority(t_pr *stut)
{
	char	*str;

	str = ft_itoa_u(stut->u);
	stut->len = ft_strlen(str);
	free(str);
	if (stut->zero || stut->plus || stut->minus || stut->space)
	{
		if (stut->minus)
			type_uns_minus_u(stut);
		else if (stut->plus)
			type_uns_plus_u(stut);
		else if (stut->space)
			type_uns_space_u(stut);
		else if (stut->zero)
			type_uns_zero_u(stut);
	}
	else
		type_uns_regular(stut);
}
