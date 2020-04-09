#include "printf.h"

int		decimal_pregular_space(t_pr *stut)
{
	int i;

	i = 0;
	if (stut->width > stut->len)
	{
		if (stut->width > stut->accuracy)
		{
			if (stut->accuracy > stut->len)
				i = stut->width - stut->accuracy;
			else
				i = stut->width - stut->len;
			if (stut->a < 0 && stut->accuracy >= stut->len)
				i--;
			ft_putnchar(' ', i, stut);
		}
	}
	return (i);
}