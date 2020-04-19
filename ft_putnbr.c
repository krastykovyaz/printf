#include "printf.h"

void ft_putnbr(__int128_t n, t_pr *stut)
{
    if (n == -2147483648)
    {
		ft_putstr("-2147483648", stut);
		return ;
	}
    if (n < 0)
	{
		n = -n;
		ft_putchar('-', stut);
	}
		// printf("%i\n", n);
    if (n > 9)
        ft_putnbr(n / 10, stut);
    ft_putchar(n % 10 + '0', stut);
}