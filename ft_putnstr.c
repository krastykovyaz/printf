#include "printf.h"

void ft_putnstr(const char *s, int k, t_pr *stut)
{
    int i;

    i = 0;
    while (k)
    {
        ft_putchar(s[i], stut);
        k--;
        i++; 
    }
}
