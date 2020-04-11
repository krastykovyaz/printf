#include "printf.h"
int	main(void)
{
	printf("%+5.4i\n", 22345);
	ft_printf("%+5.4i\n", 22345);
	printf("%+5.4i\n", 25);
	ft_printf("%+5.4i\n", 25);
	printf("%2.1i\n", 4);
	ft_printf("%2.1i\n", 4);

	printf("%02i\n", 4);
	ft_printf("%02i\n", 4);
	printf("%4.3i\n", -4);
	ft_printf("%4.3i\n", -4);
	printf("%+2.1i\n", -1);
	ft_printf("%+2.1i\n", -1);

	printf("% 2.10i\n", 123);
	ft_printf("% 2.10i\n", 123);
	printf("% 5.3i\n", 12);
	ft_printf("% 5.3i\n", 12);
	printf("% 05.3i\n", 12);
	ft_printf("% 05.3i\n", 12);
	printf("% 5.0i\n", 12);
	ft_printf("% 5.0i\n", 12);
	printf("% 01.3i\n", 1234);
	ft_printf("% 01.3i\n", 1234);
	printf("% 2.3i\n", 1234);
	ft_printf("% 2.3i\n", 1234);
	printf("% 05i\n", 12);
	ft_printf("% 05i\n", 12);
	printf("% -7.5i\n", 3);
	ft_printf("% -7.5i\n", 3);
	printf("%.3i\n", 3);
	ft_printf("%.3i\n", 3);
	printf("% 2i\n", 0);
	ft_printf("% 2i\n", 0);
	printf("% 5i\n", 12);
	ft_printf("% 5i\n", 12);
	printf("%1i\n", 123);
	ft_printf("%1i\n", 123);

	printf("%4.3i\n", -12);
	ft_printf("%4.3i\n", -12);
	printf("% 7i\n", -123);
	ft_printf("% 7i\n", -123);

	printf("% -7.5i\n", 3);
	ft_printf("% -7.5i\n", 3);
	printf("%.3i\n", 3);
	ft_printf("%.3i\n", 3);
	printf("% 2i\n", 0);
	ft_printf("% 2i\n", 0);
	
	printf("%05.2i\n", -2);
	ft_printf("%05.2i\n", -2);
	printf("%01.5i\n", -222);
	ft_printf("%01.5i\n", -222);
	printf("%1i\n", 123);
	ft_printf("%1i\n", 123);
	printf("% 2.1i\n", 01);
	ft_printf("% 2.1i\n", 01);
	printf("% 3.1i\n", 10);
	ft_printf("% 3.1i\n", 10);
	printf("% 2.1i\n", 10);
	ft_printf("% 2.1i\n", 10);
	printf("% 0.1i\n", 10);
	ft_printf("% 0.1i\n", 10);
	printf("% 4.1i\n", 10);
	ft_printf("% 4.1i\n", 10);
	printf("% 3.1i\n", 1);
	ft_printf("% 3.1i\n", 1);
	printf("% 2.1i\n", 1);
	ft_printf("% 2.1i\n", 1);
	printf("% 0.1i\n", 1);
	ft_printf("% 0.1i\n", 1);
	printf("% 4.1i\n", 10);
	ft_printf("% 4.1i\n", 10);
	printf("%5.u\n", 0);
	ft_printf("%5.u\n", 0);
	printf("% .6i\n", -3);
	ft_printf("ft = % .6i\n", -3);
	return (0);
}