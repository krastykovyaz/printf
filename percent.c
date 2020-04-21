#include "printf.h"

int	percent(va_list ap, const char *format, t_pr *stut)
{
	stut->i++;
    if (format[stut->i] == '%' && stut->i++)
		ft_putchar('%', stut);
    else if (format[stut->i] != '\0')
		flag(ap, format, stut);
	// printf("%i\n", stut->i);
	return (0);
}