#include "printf.h"

void convertf2(t_pr *stut)
{
    long long int nb;
    __int128_t f1;
    __int128_t f2;
    __int128_t      d;
    int i;
    char *s;
    int k;

    // printf("F\n");
    if (!stut->accuracy)
        i = 6;
    else
        i = stut->accuracy;
    // printf("%Lf\n", stut->fl);
    // printf("%lli\n", i);
    //nb = (stut->fl > 0) ? nb + 1 : nb--;
    nb = stut->fl;
    // printf("%lli\n", nb);
    if (stut->fl < 0 && nb == 0)
        ft_putchar('-', stut);
    stut->fl = stut->fl - nb;
    if (stut->fl < 0)
        stut->fl = -(stut->fl);
    s = ft_itoa2(f1);
        // printf("%s\n", s);
    k = ft_strlen(s);
        // printf("%i\n", k);
   free(s);
    // printf("%Lf\n", stut->fl);
    f1 = stut->fl * afterdot(10, i);
    // printf("%lli\n", f1);
    // if (ft_strlen(stut->fl) == 19)
    f2 = stut->fl * (afterdot(10, i + 1));
    // printf("%i\n", f2);
    d = f2 - f1 * 10;
    //  printf("%i\n", d);
    if (d > 4){
        if  (f1 == 0 )
            f1++;
        else if (i == 19 && k != 18)
            f1=f1 ;
        else
            f1++;
        }
        // printf("f\n");
    // printf("%i\n", f2-f1);
    //  printf("%i\n", f1);   
    // printf("\nnb=%lli\n", nb);
    if ((ft_round(f1) != 9 && (int)(stut->fl * 10) == 9) || ((stut->dot && !stut->accuracy && ft_round(f1) > 4)))
    {
        // printf("f\n");
        f1 = 0;
        if (stut->fl_save > 0)
            nb++;
        else
            nb--;
    }
    // printf("\nnb=%lli\n", nb);
    // printf("%i\n", i);
    ft_putnbr(nb, stut);
    if (stut->dot == 0 || (stut->dot != 0 && stut->accuracy != 0))
    {
        ft_putchar('.', stut);
        
        s = ft_itoa2(f1);
        // printf("%s\n", s);
        k = ft_strlen(s);
        // printf("%i\n", k);
        free(s);
        if ((i - k) > 0)
            ft_putnchar('0', i - k, stut);
        ft_putnbr(f1, stut);
    }
    else if (stut->grid)
        ft_putchar('.', stut);
}