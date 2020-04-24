/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 14:50:10 by aleksandrko       #+#    #+#             */
/*   Updated: 2020/04/24 09:23:46 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

typedef	struct	s_pr
{
	int			nb;
	int			i;
	char		plus;
	char		minus;
	char		space;
	char		grid;
	int			zero;
	int			width;
	int			accuracy;
	int			dot;
	int			size;
	__int128_t	a;
	int			len;
	char		*ptr;
	long double	fl;
	long double	fl_save;
	char		*s;
}				t_pr;

int				ft_printf(const char *format, ...);
void			free_list(t_pr *stut);
int				percent(va_list arg, const char *format, t_pr *stut);
void			ft_putchar(const char c, t_pr *stut);
int				flag(va_list arg, const char *format, t_pr *stut);
int				width(va_list arg, const char *format, t_pr *stut);
int				ft_atoi(const char *str);
int				if_digit(int c);
int				precision(va_list ap, const char *format, t_pr *stut);
int				size(va_list ap, const char *format, t_pr *stut);
int				search_type(va_list ap, const char *format, t_pr *stut);
int				type_decimal_size(va_list ap, const char *format, t_pr *stut);
void			ft_putstr(const char *str, t_pr *stut);
void			type_decimal_priority(const char *format, t_pr *stut);
int				decimal_pregular_space(t_pr *stut);
int				type_decimal_regular(t_pr *stut);
int				ft_strlen(const char *str);
char			*ft_itoa(long long int n);
char			*ft_itoa2(long long int n);
void			ft_putnchar(const char c, int i, t_pr *stut);
void			ft_putnbr(__int128 n, t_pr *stut);
__int128_t		convert(t_pr *stut, int base);
int				type_decimal_minus(t_pr *stut);
int				type_decimal_plus(const char *format, t_pr *stut);
int				type_decimal_zero(t_pr *stut);
int				type_decimal_space(const char *format, t_pr *stut);
void			decimal_pregular_zero(int i, t_pr *stut);
int				type_octal_size(va_list ap, t_pr *stut);
int				type_priority_octal(t_pr *stut);
int				type_octal_minus(t_pr *stut);
int				type_octal_zero(t_pr *stut);
int				type_octal_regular(t_pr *stut);
int				type_hex_size(va_list ap, const char *format, t_pr *stut);
int				type_priority_hex(const char *format, t_pr *stut);
char			*convert_hex(const char *format, t_pr *stut, int base);
int				type_hex_minus(const char *format, t_pr *stut);
int				type_hex_regular(const char *format, t_pr *stut);
int				type_float_size(va_list ap, t_pr *stut);
int				type_float_priority(t_pr *stut);
int				float_minus(t_pr *stut);
void			convertf(t_pr *stut);
int				float_zero(t_pr *stut);
int				float_plus(t_pr *stut);
int				float_space(t_pr *stut);
int				regular_float(t_pr *stut);
int				ft_round(__int128_t n);
__int128_t		afterdot(__int128_t n, int i);
void			ft_float(long long nb, __int128_t n, long long i, t_pr *stut);
void			convertf2(t_pr *stut);
int				type_str(va_list ap, const char *format, t_pr *stut);
void			ft_putnstr(const char *s, int k, t_pr *stut);
int				type_address(const char *format, void *b, t_pr *stut);
int				type_perc(t_pr *stut);

#endif
