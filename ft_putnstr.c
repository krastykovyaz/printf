/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleksandrkovazin <aleksandrkovazin@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:35:27 by ccharmai          #+#    #+#             */
/*   Updated: 2020/04/22 09:35:39 by aleksandrko      ###   ########.fr       */
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
