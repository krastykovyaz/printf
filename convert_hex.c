/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 10:20:51 by lnoisome          #+#    #+#             */
/*   Updated: 2020/05/24 20:56:46 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/printf.h"

int		countj(t_pr *stut, int base)
{
	unsigned long long int	n;
	int						j;

	j = 1;
	n = stut->a;
	while ((n /= base) >= 1)
		j++;
	return (j);
}

char	*convert_hex(const char *format, t_pr *stut, int base)
{
	char					*s;
	unsigned long long int	n;
	int						j;
	int						z;

	j = countj(stut, base);
	if (!(s = (char *)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	n = stut->a;
	z = 0;
	while (j--)
	{
		if (n % base < 10)
			s[j] = n % base + '0';
		else
		{
			s[j] = (format[stut->i] == 'x' || format[stut->i] == 'p') ? \
			n % base + 'a' - 10 : n % base + 'A' - 10;
		}
		n /= base;
		z++;
	}
	s[z] = '\0';
	return (s);
}
