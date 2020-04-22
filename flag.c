/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleksandrkovazin <aleksandrkovazin@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:24:31 by ccharmai          #+#    #+#             */
/*   Updated: 2020/04/22 08:54:33 by aleksandrko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		flag(va_list ap, const char *format, t_pr *stut)
{
	while (format[stut->i] == '+' || format[stut->i] == ' ' || \
	format[stut->i] == '-' || format[stut->i] == '0' || format[stut->i] == '#')
	{
		if (format[stut->i] == '+')
			stut->plus = '+';
		else if (format[stut->i] == '-')
			stut->minus = '-';
		else if (format[stut->i] == ' ')
			stut->space = ' ';
		else if (format[stut->i] == '#')
			stut->grid = '#';
		else if (format[stut->i] == '0')
			stut->zero = '0';
		stut->i += 1;
	}
	if (format[stut->i] != '\0')
		width(ap, format, stut);
	return (0);
}
