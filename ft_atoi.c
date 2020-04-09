#include "printf.h"

int ft_atoi(const char *str)
{
    short int       sign;
    unsigned   long result;

    sign = 1;
    result = 0;
    //printf("%s\n", str);
    while (*str == '\r' || *str == ' ' || *str == '\t' ||
    *str == '\v' || *str == '\n' || *str == '\f')
        ++str;
    if (*str == '-' && ++str)
        sign = -1;
    else if (*str == '+')
        ++str;
    // printf("%d\n", *str);
    while (if_digit(*str))
    {
        result = result * 10 + ((unsigned long)*str - '0');
        str++;
    }
    if (result > 9223372036854775807UL && sign == 1)
        result = -1;
    else if (result > 9223372036854775808UL && sign == -1)
        result = 0;
    return ((int)result * sign);
}