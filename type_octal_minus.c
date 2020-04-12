#include "printf.h"

int type_octal_minus(t_pr *stut)
{
    int i;

    i = 0;
   
    if (stut->accuracy > stut->len)
    {
        if (stut->a <= 0)
            i = stut->accuracy - stut->len + 1;
        else
            i = stut->accuracy - stut->len;
    }
    if (stut->grid && i == 0)
        i++;
    ft_putnchar('0', i, stut);
    if (stut->a != 0 || (stut->a == 0 && stut->dot == 0 && !stut->grid))
    {
        if (stut->a < 0)
            stut->a *= (-1);
        ft_putnbr(stut->a, stut);
        i = stut->width - i - stut->len;
    }
    else
        i = stut->width - i;
    if (i > 0)
        ft_putnchar(' ', i, stut);
    return (0);
}