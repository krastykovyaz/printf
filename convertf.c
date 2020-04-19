#include "printf.h"

void convertf(t_pr *stut)
{
    long long int i;
    long long int nb;
    __int128_t f1;
    __int128_t f2;

    if (!stut->accuracy)
        i = 6;
    else
        i = stut->accuracy;
    if (stut->fl < 0)
        stut->fl *= (-1);
    if (stut->fl < 0 && nb == 0)
        ft_putchar('-', stut);
    nb = stut->fl;
    // printf("ex2 =%Lf\n", stut->fl);
    // printf("ex2 =%Lf\n", nb);
    stut->fl = stut->fl - nb;
    // printf("ex3 =%Lf\n", stut->fl);
    // printf("ex3 =%Lf\n", nb);
    
    // printf("fl =%lli\n", i);
    f1 = stut->fl * afterdot(10, i);
    f2 = stut->fl * afterdot(10, (i + 1));
    // long long ff = f2-f1;
    // printf("f1 =%lli\n", f1);
    // printf("f2 =%lli\n", f2);
    // printf("ff =%lli\n", ff);
    // ff *= 10;
    // printf("ff2 =%lli\n", ff);
    if (f2 - f1 * 10 > 4)
        f1++;
    // int t = (int)(stut->fl * 10);
    // int t = ft_round(f1);
    // printf("stut->fl =%lli\n", stut->fl); 
    // printf("t =%lli\n", t);
    // printf("\nnb=%lli\n", nb); 
    // printf("%i\n", (int)f1); 
    // printf("%Lf\n", stut->fl); 
    if ((ft_round(f1) != 9 && (int)(stut->fl * 10) == 9) || (stut->dot && !stut->accuracy && ft_round(f1) > 4))
    {

        f1 = 0;
        // if (stut->minus && !stut->zero)
        // {
        // printf("F\n"); 
        if (stut->fl_save < 0)
        {
            // printf("f\n");
            nb -= 1;
        }
        nb += 1;
        // }
        // else if (stut->zero)
        //     nb++; 
    }
    ft_putnbr(nb, stut);
    // printf("F\n");
    ft_float(nb, f1, i, stut);
}