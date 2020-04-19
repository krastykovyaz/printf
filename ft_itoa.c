#include "printf.h"

char    *ft_itoa(long long int n)
{
    char            *result;
    int             i;
    long long int   nb;

    i = 0;
    nb = n;
	if (nb < 0)
	{
		nb *= (-1);
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
    if (!(result = (char*)malloc(sizeof(char) * (unsigned long)(i + 1))))
        return (NULL);
    result[i--] = '\0';
    if (n == 0)
    {
        result[0] = '0';
        return(result);
    }
    if (n < 0)
    {
        result[0] = '-';
        n *= (-1);
    }
    while (n > 0)
    {
        result[i] = '0' + (n % 10);
        n /= 10;
        i--;
    }
    //printf("result=%s\n", result);
    return (result);
}