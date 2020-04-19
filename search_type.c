#include "printf.h"

int search_type(va_list ap, const char *format, t_pr *stut)
{
    if (format[stut->i] == 'd' || format[stut->i] == 'i' || format[stut->i] == 'u')
        type_decimal_size(ap, format, stut);
    else if (format[stut->i] == 'o')
        type_octal_size(ap, stut);
    else if (format[stut->i] == 'x' || format[stut->i] == 'X')
        type_hex_size(ap, format, stut);
    else if (format[stut->i] == 'f')
        type_float_size(ap, stut);
    else
        ft_putchar(format[stut->i], stut);
    stut->i += 1;
    return (0);
}