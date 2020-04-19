#include "printf.h"

int type_hex_minus(const char *format, t_pr *stut)
{
    int i;

    i = 0;
    if (stut->grid && stut->a)
    {
        if (format[stut->i] == 'x')
            ft_putstr("0x", stut);
        else
            ft_putstr("0X", stut);
    }
    if (stut->accuracy > stut->len)
    {
        if (stut->a == 0)
            i = stut->accuracy;
        else
            i = stut->accuracy - stut->len;
    }
    ft_putnchar('0', i, stut);
    if (stut->ptr && stut->a)
    {
        // printf("a1\n");
        ft_putstr(stut->ptr, stut);
        // printf("a2\n");
        i = stut->width - i - stut->len;
    }
    else if (stut->ptr && stut->a ==0 && !stut->dot)
    {
        ft_putstr(stut->ptr, stut);
        i = stut->width - i - stut->len;
    }
    else
        i = stut->width -i;
    if (i > 0)
        ft_putnchar(' ', i, stut);
    return (0);
}