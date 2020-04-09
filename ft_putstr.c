#include "printf.h"

void    ft_putstr(const char *str, t_pr *stut)
{
    if (str)
        write(1, str, ft_strlen(str));
    stut->nb += ft_strlen(str);
}