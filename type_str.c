#include "printf.h"

int type_s_minus(t_pr *stut)
{
    int i;
    
    i = ft_strlen(stut->s);
    if (!stut->width || stut->accuracy > stut->width)
        (stut->accuracy > i) ? ft_putstr(stut->s, stut) :\
         ft_putnstr(stut->s, stut->accuracy, stut);
    else if(i > stut->width && !stut->dot)
        ft_putstr(stut->s, stut);
    if (stut->width > stut->accuracy && stut->accuracy)
    {
        if (stut->accuracy > i || !stut->dot)
        {
            ft_putnstr(stut->s, i, stut);
            ft_putnchar(' ', stut->width - i, stut);
        }
        else
        {
            ft_putnstr(stut->s, stut->accuracy, stut);
            ft_putnchar(' ', stut->width - stut->accuracy, stut);
        }
    }
    else if (stut->width && !stut->accuracy && stut->dot)
        ft_putnchar(' ',  stut->width, stut);
    else if (stut->width >= i)
    {
        ft_putstr(stut->s, stut);
        ft_putnchar(' ', stut->width - i, stut);
    }
    return (0);
}

int type_s_regular(t_pr *stut)
{
    int i;
    
    i = ft_strlen(stut->s);
    if (stut->width >= stut->accuracy && stut->accuracy)
    {
        if (stut->accuracy > i || !stut->dot)
        {
                    // printf("F\n");
            ft_putnchar(' ', stut->width - i, stut);
            ft_putnstr(stut->s, i, stut);
        }
        else
        {
            
            ft_putnchar(' ', stut->width - stut->accuracy, stut);
            ft_putnstr(stut->s, stut->accuracy, stut);
        }
    }
    else if (stut->width && !stut->accuracy && stut->dot)
        ft_putnchar(' ', stut->width, stut);
    else if (stut->width >= i)
    {
        ft_putnchar(' ', stut->width - i, stut);
        ft_putstr(stut->s, stut);
    }
    else if ((!stut->width && stut->accuracy) || stut->accuracy > stut->width)
        stut->accuracy > i ? ft_putstr(stut->s, stut) :\
         ft_putnstr(stut->s, stut->accuracy, stut);
    else if (i > stut->width && i > stut->accuracy && !stut->dot)
        ft_putstr(stut->s, stut);
    return (0);
}

int type_str(va_list ap, const char *format, t_pr *stut)
{
    if (format[stut->i] == 'c')
    {
        stut->a = va_arg(ap, unsigned int);
        // printf("%lli", stut->a);
        if (stut->minus)
        {
            // printf("f\n");
            ft_putchar(stut->a, stut);
            ft_putnchar(' ', stut->width - 1, stut);
        }
        else{
            if (stut->width)
                (stut->a >= 0) ? ft_putnchar(' ', stut->width - 1, stut) : ft_putnchar(' ', stut->width, stut);
            ft_putchar(stut->a, stut);}
    }
    else
    {
        stut->s = va_arg(ap, char *);
        if (!stut->s)
            stut->s = "(null)";
        if (stut->minus)
            type_s_minus(stut);
        else
            type_s_regular(stut);
    } 
    return (0);
}