#include "printf.h"

int float_space(t_pr *stut)
{
    int i;

    i = 0;
    if (stut->width && stut->width > stut->accuracy)
    {
        if (stut->fl > 0)
            i++;
        i = (stut->width - stut->len - i);
        if (i > 0)
        {
            // printf("%i\n", i);
            ft_putnchar(' ', i, stut);
        }
    }
    if (stut->fl >= 0)
        ft_putchar(' ', stut);
    else
        ft_putchar('-', stut);
    //printf("%Lf\n", stut->fl);
    convertf(stut);
    return (0);
}