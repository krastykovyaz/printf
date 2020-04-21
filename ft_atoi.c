/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccharmai <5429549@mail.ru>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:29:16 by ccharmai          #+#    #+#             */
/*   Updated: 2020/04/21 20:30:12 by ccharmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "printf.h"

int	ft_atoi(const char *str)
{
	short int       sign;
	unsigned   long result;

	sign = 1;
	result = 0;
	while (*str == '\r' || *str == ' ' || *str == '\t' ||
	*str == '\v' || *str == '\n' || *str == '\f')
		++str;
	if (*str == '-' && ++str)
		sign = -1;
	else if (*str == '+')
		++str;
	while (if_digit(*str))
	{
		result = result * 10 + ((unsigned long)*str - '0');
		str++;
	}
	if (result > 9223372036854775807UL && sign == 1)
		result = -1;
	else if (result > 9223372036854775808UL && sign == -1)
		result = 0;
	return ((int)result * sign);
}
