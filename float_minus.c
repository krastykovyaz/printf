#include "printf.h"

int float_minus(t_pr *stut)
{
    int i;

    i = 0;
    if (stut->fl >= 0 && (stut->plus || stut->space))
    {
        if (stut->plus)
            ft_putchar('+', stut);
        if (stut->space)
            ft_putchar(' ', stut);
        i++;
    }
    if (stut->fl < 0)
    {
        ft_putchar('-', stut);
        stut->fl = (-stut->fl);
    }
    // printf("\n");
    // printf("%i\n", i);
    convertf(stut);
    if (stut->width && stut->width > stut->accuracy)
    {
        // printf("len=%i\n", stut->len);
        i = stut->width - stut->len - i;
        if (stut->grid && (!stut->dot || (stut->dot && !stut->accuracy)))
            i--;
        // printf("%i\n", i);
        if (i > 0)
            ft_putnchar(' ', i ,stut);
    }
    return (0);
}