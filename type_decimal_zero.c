#include "printf.h"

int decimal_pzero(t_pr *stut)
{
    int i;

    i = 0;
    if ((stut->width > stut->len) || stut->space)
    {
        // printf("f\n");
        if (stut->accuracy >= stut->len)
        {
            i = stut->width - stut->accuracy;
            i = (stut->a < 0) ? i - 1 : i;
        }
        else
            i = stut->width - stut->len;
        if (i >= 0)
        {
            if (stut->accuracy)
                ft_putnchar(' ', i, stut);
            else
            {
                if (stut->a < 0)
                    ft_putchar('-', stut);
                ft_putnchar('0', i, stut);
            }
        }
        else if (stut->space)
        {
            ft_putchar(' ', stut);
        }
    }
        return (i);
}

int type_decimal_zero(t_pr *stut)
{
    int i;
    int m;

    m = 0;
    decimal_pzero(stut);
    //printf("F\n");
    if (stut->width > stut->len && i >= 0 && stut->a < 0 && !stut->accuracy)
        m = 1;
    if (stut->a < 0 && m == 0)
        ft_putchar('-', stut);
    if (stut->accuracy >= stut->len)
    {
        i = stut->accuracy - stut->len;
        i = (stut->a < 0) ? 1 + i : i;
        ft_putnchar('0', i, stut);
    }
    ft_putnbr(convert(stut, 10), stut);
    return(0);
}