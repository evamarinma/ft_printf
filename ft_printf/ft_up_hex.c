//#include "ft_printf.c"
#include <unistd.h>

int	ft_up_hex(unsigned int n)
{
	char	c;
	char	*base;
	int		i;

	i = 0;
	base = "0123456789ABCDEF";
	if (n >= 16)
		i += ft_up_hex(n / 16);
	c = base[n % 16];
	write(1, &c, 1);
	i++;
	return (i);
}
