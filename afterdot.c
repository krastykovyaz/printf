#include "printf.h"

__int128_t afterdot(__int128_t n, int i)
{
    __int128_t nb;

    nb = 1;
    while (i--)
    {
        nb *= n;
    }
    return(nb);
}

