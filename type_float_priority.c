/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_float_priority.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleksandrkovazin <aleksandrkovazin@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:51:52 by aleksandrko       #+#    #+#             */
/*   Updated: 2020/04/21 21:00:08 by aleksandrko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		type_float_priority(t_pr *stut)
{
	if (stut->minus || stut->zero || stut->plus || stut->space)
	{
		if (stut->minus)
			float_minus(stut);
		else if (stut->zero)
			float_zero(stut);
		else if (stut->plus)
			float_plus(stut);
		else if (stut->space)
			float_space(stut);
	}
	else
	{
		if (stut->width > stut->len)
			ft_putnchar(' ', stut->width - stut->len, stut);
		convertf2(stut);
	}
	return (0);
}
