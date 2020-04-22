/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:35:27 by ccharmai          #+#    #+#             */
/*   Updated: 2020/04/22 15:58:11 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnstr(const char *s, int k, t_pr *stut)
{
	int i;

	i = 0;
	while (k)
	{
		ft_putchar(s[i], stut);
		k--;
		i++;
	}
}
