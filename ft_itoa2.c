#include "printf.h"

char    *ft_itoa2(long long int n)
{
    char            *result;
    int             i;
    long long int   power;
    short sign;

    sign = (n < 0) ? 2 : 1;
    i = 1;
    power = 1;
    // printf("%lli\n", n);
    while ((n / power / 10) != 0 && ++i)
        power *= 10;
    // printf("%i", i);
    if (!(result = malloc(sizeof(char) * (unsigned long)(i + sign))))
        return (NULL);
    i = 0;
    if (sign == 2)
    {
        result[i++] = '-';
        // i++;
    }
    //printf("p=%lli\n", power);
    while (power)
    {
        result[i++] =  n / power * sign + '0';
        //printf("%lli\n", power);
        n %= power;
        power /= 10;
        // i++;
    }
    result[i++] = '\0';
    return (result);
}
