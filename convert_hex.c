/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:08:58 by ccharmai          #+#    #+#             */
/*   Updated: 2020/04/22 15:57:02 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*convert_hex(const char *format, t_pr *stut, int base)
{
	char		*s;
	long int	n;
	int			i;

	i = 1;
	n = stut->a;
	while ((n /= base) >= 1)
		i++;
	if (!(s = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	s[i] = '\0';
	n = stut->a;
	while (i--)
	{
		if (n % base < 10)
			s[i] = n % base + '0';
		else
		{
			s[i] = (format[stut->i] == 'x') ? n % base + 'a' - 10 : \
	n % base + 'A' - 10;
		}
		n /= base;
	}
	return (s);
}
