/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_float_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleksandrkovazin <aleksandrkovazin@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:42:07 by aleksandrko       #+#    #+#             */
/*   Updated: 2020/04/21 20:44:15 by aleksandrko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		len_a_dot(t_pr *stut)
{
	int		nb;
	char	*s;
	int		i;

	nb = stut->fl_save;
	s = ft_itoa(nb);
	i = ft_strlen(s) + 1;
	free(s);
	if (stut->dot == 0)
		i += 6;
	else if (stut->dot && !stut->accuracy)
		i--;
	else
		i += stut->accuracy;
	return (i);
}

int		type_float_size(va_list ap, t_pr *stut)
{
	if (stut->size == 1)
		stut->fl = va_arg(ap, double);
	else if (stut->size == 3)
		stut->fl = va_arg(ap, long double);
	else
		stut->fl = (double)va_arg(ap, double);
	stut->fl_save = stut->fl;
	stut->len = len_a_dot(stut);
	type_float_priority(stut);
	return (0);
}
