/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_priority_octal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 09:39:58 by aleksandrko       #+#    #+#             */
/*   Updated: 2020/04/22 15:59:10 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		type_priority_octal(t_pr *stut)
{
	char	*str;

	stut->a = convert(stut, 8);
	str = ft_itoa(stut->a);
	stut->len = ft_strlen(str);
	free(str);
	if (stut->minus)
		type_octal_minus(stut);
	else if (stut->zero)
		type_octal_zero(stut);
	else
		type_octal_regular(stut);
	return (0);
}
