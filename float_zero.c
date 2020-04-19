#include "printf.h"

int float_zero(t_pr *stut)
{
    int i;

    i = 0;
    if (stut->plus && stut->fl >= 0)
    {
        ft_putchar('+', stut);
        i++;
    }
    else if (stut->space && stut->fl >= 0)
    {
        ft_putchar(' ', stut);
        i++;
    }
    else if (stut->fl < 0)
        ft_putchar('-', stut);
    // printf("%i\n", i);
    if (stut->width && stut->width > stut->accuracy)
        if (stut->width > stut->len + i)
            ft_putnchar('0', stut->width - (stut->len + i), stut);
    convertf(stut);
    return (0);
}