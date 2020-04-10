#include "printf.h"


void type_decimal_priority(const char *format, t_pr *stut)
{
    char *str;

    str = ft_itoa(stut->a);
    stut->len = ft_strlen(str);
    // printf("%d\n", stut->len);
    free(str);
    if (stut->zero || stut->plus || stut->minus || stut->space)
    {
        if (stut->minus)
            type_decimal_minus(stut);
        else if (stut->plus)
            type_decimal_plus(format, stut);
        else if (stut->space)
            type_decimal_space(format, stut);
        else if (stut->zero)
            type_decimal_zero(stut);
    }
    else
        type_decimal_regular(stut);
}


int type_decimal_size(va_list ap, const char *format, t_pr *stut)
{
    if (stut->size == 11)
        stut->a = va_arg(ap, long long int); // [−9,223,372,036,854,775,807, +9,223,372,036,854,775,807] 64bits
    else if (stut->size == 1)
    {
        if (format[stut->i] == 'u')
            stut->a = va_arg(ap, unsigned long int); // [0, 4,294,967,295] 
        else
            stut->a = va_arg(ap, long int); //[−2,147,483,647, +2,147,483,647]  32 bits
    }
    else if (stut->size == 22)
    {
        if (format[stut->i] == 'u')
        {
            stut->a = (unsigned char)va_arg(ap, int); //same size, as char [0, 255]
        }
        else
            stut->a = (char)va_arg(ap, int); //CHAR_BIT bits
    }
    else if (stut->size == 2)
    {
        if (format[stut->i] == 'u')
        {
            stut->a = (unsigned short)(va_arg(ap, unsigned int)); //[0, 65,535] 
        }
        else
            stut->a = (short)va_arg(ap, int); //[−32,767, +32,767] 16bit
    }
    else
    {
        if (format[stut->i] == 'u')
            stut->a = va_arg(ap,unsigned int);
        else
            stut->a = va_arg(ap, int);
    }
    type_decimal_priority(format, stut);
	return (0);
}