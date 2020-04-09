#include "printf.h"


int ft_printf(const char *format, ...)
{
    t_pr stut;
	va_list ap;

	stut.i = 0;
	stut.nb = 0;
    va_start(ap, format);
	while (format[stut.i] != '\0')
	{
		free_list(&stut);
		while (format[stut.i] != '%' && format[stut.i] != '\0')
		{
			if (format[stut.i] == '%')
				break ;
			ft_putchar(format[stut.i], &stut);
				stut.i++;
		}
		if (format[stut.i] == '%')
			percent(ap, format, &stut);
	}
	va_end(ap);
	return (stut.nb);
}