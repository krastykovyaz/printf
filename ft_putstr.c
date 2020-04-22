/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleksandrkovazin <aleksandrkovazin@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:35:52 by ccharmai          #+#    #+#             */
/*   Updated: 2020/04/22 09:06:01 by aleksandrko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "printf.h"

void	ft_putstr(const char *str, t_pr *stut)
{
	if (str)
		write(1, str, ft_strlen(str));
	stut->nb += ft_strlen(str);
}