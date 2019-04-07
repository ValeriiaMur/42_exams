#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if ( n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	if ( n < 10)
	{
		ft_putchar(n % 10 + '0');
	}
	return (n);
}

int		ft_atoi(const char *str)
{
	int i;
	int nbr;
	int negative;

	nbr = 0;
	negative = 0;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	if (negative == 1)
		return (-nbr);
	else
		return (nbr);
}

int main(int argc, char **argv)
{
	if ( argc > 1)
	{
		int n = 1;
		int nbm = ft_atoi(argv[1]);
		while ( n < 10)
		{
			ft_putnbr(n);
			write(1, " x ", 3);
			ft_putnbr(nbm);
			write(1, " = ", 3);
			ft_putnbr(n * nbm);
			if (n < 9)
				ft_putchar('\n');
			n++;
		}
	}
	write(1, "\n", 1);
}

