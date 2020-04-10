#include "printf.h"

void ft_putnbr(__int128 n, t_pr *stut)
{
    if (n == -2147483648)
    {
		ft_putstr("-2147483648", stut);
		return ;
	}
    if (n > 9)
        ft_putnbr(n / 10, stut);
    ft_putchar(n % 10 + '0', stut);
}