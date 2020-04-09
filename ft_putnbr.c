#include "printf.h"

void ft_putnbr(__int128 n, t_pr *ssl)
{
    if (n == -2147483648)
    {
		ft_putstr("-2147483648", ssl);
		return ;
	}
    if (n > 9)
        ft_putnbr(n / 10, ssl);
    ft_putchar(n % 10 + '0', ssl);
}