/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uns.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 09:17:26 by lnoisome          #+#    #+#             */
/*   Updated: 2020/05/19 10:56:48 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/printf.h"

char				*ft_itoa_u(unsigned long long nb)
{
	int					size;
	char				*str;
	long long int		n;

	size = 2;
	n = nb;
	while (nb /= 10)
		size++;
	if ((str = (char*)malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	str[--size] = '\0';
	while (size--)
	{
		str[size] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}

unsigned long long	convert_u(t_pr *stut, int base)
{
	unsigned long long int		bin;
	__int128_t					k;
	unsigned long long int		i;

	bin = 0;
	k = 1;
	i = stut->u;
	while (i)
	{
		bin += (i % base) * k;
		k *= 10;
		i /= base;
	}
	return (bin);
}

void				ft_putnbr_u(unsigned long long int n, t_pr *stut)
{
	if (n > 9)
		ft_putnbr_u(n / 10, stut);
	ft_putchar(n % 10 + '0', stut);
}

int					type_uns_size(va_list ap, t_pr *stut)
{
	if (stut->size == 11)
		stut->u = va_arg(ap, unsigned long long int);
	else if (stut->size == 1)
		stut->u = va_arg(ap, unsigned long int);
	else if (stut->size == 22)
		stut->u = (unsigned char)va_arg(ap, int);
	else if (stut->size == 2)
		stut->u = (unsigned short)(va_arg(ap, unsigned int));
	else
		stut->u = va_arg(ap, unsigned int);
	type_uns_priority(stut);
	return (0);
}
