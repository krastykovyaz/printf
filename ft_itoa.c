/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleksandrkovazin <aleksandrkovazin@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:31:10 by ccharmai          #+#    #+#             */
/*   Updated: 2020/04/22 08:58:10 by aleksandrko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_itoa(long long int n)
{
	char			*result;
	int				i;
	long long int	nb;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		nb *= (-1);
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	if (!(result = (char*)malloc(sizeof(char) * (unsigned long)(i + 1))))
		return (NULL);
	result[i--] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (n < 0)
	{
		result[0] = '-';
		n *= (-1);
	}
	while (n > 0)
	{
		result[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	return (result);
}
