/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccharmai <5429549@mail.ru>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:32:56 by ccharmai          #+#    #+#             */
/*   Updated: 2020/04/21 20:32:57 by ccharmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char    *ft_itoa2(long long int n)
{
	char            *result;
	int             i;
	long long int   power;
	short sign;

	sign = (n < 0) ? 2 : 1;
	i = 1;
	power = 1;
	while ((n / power / 10) != 0 && ++i)
		power *= 10;
	if (!(result = malloc(sizeof(char) * (unsigned long)(i + sign))))
		return (NULL);
	i = 0;
	if (sign == 2)
		result[i++] = '-';
	while (power)
	{
		result[i++] =  n / power * sign + '0';
		n %= power;
		power /= 10;
	}
	result[i++] = '\0';
	return (result);
}
