/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleksandrkovazin <aleksandrkovazin@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 09:07:43 by aleksandrko       #+#    #+#             */
/*   Updated: 2020/04/22 09:08:55 by aleksandrko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		percent(va_list ap, const char *format, t_pr *stut)
{
	stut->i++;
	if (format[stut->i] == '%' && stut->i++)
		ft_putchar('%', stut);
	else if (format[stut->i] != '\0')
		flag(ap, format, stut);
	return (0);
}
