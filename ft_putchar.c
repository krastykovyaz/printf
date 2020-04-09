#include "printf.h"

void ft_putchar(char c, t_pr *stut)
{
    stut->nb += 1;
    write(1, &c, 1);
}