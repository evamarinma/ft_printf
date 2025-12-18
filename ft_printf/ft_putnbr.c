

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	c;
	int		i;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		i = 11;
		return (i);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		i++;
		n = -n;
	}
	if (n >= 10)
		i += ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	i++;
	return (i);
}
