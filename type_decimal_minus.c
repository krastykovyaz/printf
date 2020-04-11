#include "printf.h"

int type_decimal_minus(t_pr *stut)
{
    int i;
    
    i = 0;
    //printf("F\n");
    if (stut->a < 0)
        ft_putchar('-', stut);
    if (stut->a >= 0 && stut->plus)
        ft_putchar('+', stut);
    else if (stut->a >= 0 && stut->space)
        ft_putchar(' ', stut);
    if (stut->accuracy > stut->len)
    {
        if (stut->a <= 0)
        {
            i = stut->accuracy-stut->len + 1;
        }
        else
            i = stut->accuracy - stut->len;
    }
    ft_putnchar('0', i, stut);
    if (stut->a >= 0 && (stut->plus || stut->space))
        i++;
    if ((stut->a != 0) || (stut->a == 0 && stut->dot == 0))
    {
        ft_putnbr(convert(stut, 10), stut);
        i = stut->width - i - stut->len;
    }
    else
        i = stut->width - i;
    i > 0 ? ft_putnchar(' ', i, stut) : 0;
    return (0);
}