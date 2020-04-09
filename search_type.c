#include "printf.h"

int search_type(va_list ap, const char *format, t_pr *stut)
{
    if (format[stut->i] == 'd' || format[stut->i] == 'i' || format[stut->i] == 'u')
        type_decimal_size(ap, format, stut);
    else
        ft_putchar(format[stut->i], stut);
    stut->i += 1;
    return (0);
}