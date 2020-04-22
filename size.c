/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleksandrkovazin <aleksandrkovazin@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 09:10:52 by aleksandrko       #+#    #+#             */
/*   Updated: 2020/04/22 09:11:22 by aleksandrko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	size(va_list ap, const char *format, t_pr *stut)
{
	if (format[stut->i] == 'l' || format[stut->i] == 'h' || \
	format[stut->i] == 'L')
	{
		if (format[stut->i] == 'l')
			stut->size = 1;
		else if (format[stut->i] == 'h')
			stut->size = 2;
		else if (format[stut->i] == 'L')
			stut->size = 3;
		stut->i++;
		if (format[stut->i] == 'l' || format[stut->i] == 'h')
		{
			if (format[stut->i] == 'l')
				stut->size = 11;
			else if (format[stut->i] == 'h')
				stut->size = 22;
			stut->i++;
		}
	}
	if (format[stut->i] != '\0')
		search_type(ap, format, stut);
	return (0);
}
