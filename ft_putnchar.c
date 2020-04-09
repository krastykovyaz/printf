#include "printf.h"

void ft_putnchar(char c, int n, t_pr *ssl)
{
    ssl->nb += n;
    while (n != 0)
    {
        write(1, &c, 1);
        n--;
    }
}