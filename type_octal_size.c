#include "printf.h"

int type_octal_size(va_list ap, t_pr *stut)
{
    if (stut->size == 11)
    {
        stut->a =  va_arg(ap, unsigned long long int);
    }
    else if (stut->size == 22)
        stut->a = (unsigned char)va_arg(ap, long);
    else if (stut->size == 1)
        stut->a = va_arg(ap, long);
    else if (stut->size == 2)
        stut->a = (unsigned short)va_arg(ap, int);
    else
        stut->a = va_arg(ap, unsigned int);
    type_priority_octal(stut);
    return (0);
}