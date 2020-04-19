#include  "printf.h"

void ft_float(long long nb, __int128_t n, long long i, t_pr *stut)
{
	char *s;

	if (!stut->dot || (stut->dot && stut->accuracy))
	{
		// printf("r=%lli\n", r);
		ft_putchar('.', stut);
		// printf("\nr%llir\n", r);
		s = ft_itoa2(n);
		// printf("\nF%sF\n", s);
		nb = ft_strlen(s);
		// printf("%lli\n", j-i);
		if ((i - nb) > 0)
			ft_putnchar('0', i - nb, stut);
		ft_putnbr(n, stut);
		free(s);	
	}
	else if (stut->grid)
		ft_putchar('.', stut);
}