/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleksandrkovazin <aleksandrkovazin@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:33:02 by ccharmai          #+#    #+#             */
/*   Updated: 2020/04/22 09:03:41 by aleksandrko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	t_pr	stut;
	va_list	ap;

	stut.i = 0;
	stut.nb = 0;
	va_start(ap, format);
	while (format[stut.i] != '\0')
	{
		free_list(&stut);
		while (format[stut.i] != '%' && format[stut.i] != '\0')
		{
			if (format[stut.i] == '%')
				break ;
			ft_putchar(format[stut.i], &stut);
			stut.i++;
		}
		if (format[stut.i] == '%')
			percent(ap, format, &stut);
	}
	va_end(ap);
	return (stut.nb);
}
