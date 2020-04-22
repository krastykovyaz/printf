/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleksandrkovazin <aleksandrkovazin@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:35:07 by ccharmai          #+#    #+#             */
/*   Updated: 2020/04/22 09:05:27 by aleksandrko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnchar(char c, int n, t_pr *ssl)
{
	ssl->nb += n;
	while (n != 0)
	{
		write(1, &c, 1);
		n--;
	}
}
