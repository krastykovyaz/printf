/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleksandrkovazin <aleksandrkovazin@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 09:40:51 by aleksandrko       #+#    #+#             */
/*   Updated: 2020/04/22 09:41:07 by aleksandrko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		width(va_list ap, const char *format, t_pr *stut)
{
	if (format[stut->i] == '*')
	{
		stut->width = va_arg(ap, int);
		if (stut->width < 0)
		{
			stut->minus = '-';
			stut->width *= -1;
		}
		stut->i += 1;
	}
	else
	{
		stut->width = ft_atoi(&format[stut->i]);
		while (if_digit(format[stut->i]))
			stut->i += 1;
	}
	precision(ap, format, stut);
	return (0);
}
