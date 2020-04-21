#include "printf.h"

int		width(va_list ap, const char *format, t_pr *stut)
{
	// printf("%c\n", format[stut->i]);
	if (format[stut->i] == '*')
	{
		stut->width = va_arg(ap, int);
		// printf("%i\n", stut->width);
		if (stut->width < 0)
		{
			stut->minus = '-';
			stut->width *= -1;
		}
		stut->i += 1;
	}
	else
	{
		stut->width = ft_atoi(&format[stut->i]);
		while (if_digit(format[stut->i]))
			stut->i += 1;
	}
	precision(ap, format, stut);
	return (0);
}