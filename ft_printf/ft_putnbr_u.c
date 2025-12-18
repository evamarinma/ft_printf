

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	char	c;
	int		i;

	i = 0;
	if (n >= 10)
		i += ft_putnbr_u(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	i++;
	return (i);
}
