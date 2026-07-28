#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}

	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int ft_sum(int a, int b)
{
	return a + b;
}

int ft_div(int a, int b)
{
	return a / b;
}

int ft_mod(int a, int b)
{
	return a % b;
}

int ft_mul(int a, int b)
{
	return a * b;
}
int ft_dec(int a, int b)
{
	return a - b;
}

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}

	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}

	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return sign * result;
}

int	main(int ac, char **av)
{

	if(ac == 1 || ac == 2)
	{
		ft_putstr("wrong number of arguments");
	}
	else
	{
		int a = ft_atoi(av[1]);
		int b = ft_atoi(av[3]);

		if(av[2][0] == '+')
		{
			ft_putnbr(ft_sum(a, b));
		}
		else if(av[2][0] == '-')
		{
			ft_putnbr(ft_dec(a, b));
		}
		else if(av[2][0] == '*')
		{
			ft_putnbr(ft_mul(a, b));
		}
		else if(av[2][0] == '/')
		{
			ft_putnbr(ft_div(a, b));
		}
		else if(av[2][0] == '%')
		{
			ft_putnbr(ft_mod(a, b));
		}
	}
	write(1, "\n", 1);
	return (0);
}
