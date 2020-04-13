#include "printf.h"

int hex_pregular_space(t_pr *stut)
{
    int i;

    i = 0;
    if (stut->width > stut->len)
	{
        if (stut->width > stut->accuracy)
        {
            if (stut->accuracy >= stut->len)
                i = stut->width - stut->accuracy;
            else if (stut->a != 0 && (!stut->zero || stut->accuracy))
                i = stut->width - stut->len;
            else if (stut->zero)
                i = 0;
            else if (!stut->dot)
                i = stut->width - 1;
            else 
                i = stut->width;
            ft_putnchar(' ', i, stut);
        }
    }
    // printf("f2\n");
    return (i);
}
int type_hex_regular(const char *format, t_pr *stut)
{
    int i;

    // printf("f1\n");
    i = hex_pregular_space(stut);
    // printf("%i\n", i);
    // printf("f2\n");
    if (stut->grid && stut->a != 0)
    {
        if (format[stut->i] == 'x')
            ft_putstr("0x", stut);
        else
            ft_putstr("0X", stut);
    }
    if(stut->accuracy >= stut->len)
    {
        if (stut->a == 0)
            i = stut->accuracy;
        else
            i = stut->accuracy - stut->len;
        ft_putnchar('0', i, stut);
    }
    else if (stut->zero && stut->a == 0)
        ft_putnchar('0', stut->width - 1, stut);
    else if (stut->zero && stut->width > stut->len && !stut->dot)
        ft_putnchar('0', stut->width - stut->len, stut);
    if (stut->a != 0 || !stut->dot)
        ft_putstr(stut->ptr, stut);
    return (0);
}