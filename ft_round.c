#include "printf.h"

int ft_round(__int128_t n)
{
    int i;

    i = 0;
    while (n > 9)
        n = n / 10;
    i = n;
    return (i);
}