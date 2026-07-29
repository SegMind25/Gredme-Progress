#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int ft_prime(int nb)
{

	if(nb < 2)
	{
		return 0;
	}
	else if(nb == 2)
	{
		return 1;
	}
	else if(nb % 2 == 0)
	{
		return 0;
	}
	int i = 3;
	while(i * i <= nb)
	{
		if(nb % i == 0)
		{
			return 0;
		}
		i += 2;
	}

	return 1;
}

int ft_prime_limit(int limit)
{
	int i = 2;
	int sum = 0;

	while(i <= limit)
	{
		if(ft_prime(i))
		{
			sum += i;
		}
		i++;
	}
	return sum;
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
	return result * sign;
}

int	main(int ac, char **av)
{

	if(ac == 1)
	{
		ft_putnbr(0);
	}

	else if(ac >= 2)
	{
		int a = ft_atoi(av[1]);

		ft_putnbr(ft_prime_limit(a));

	}

	write(1, "\n", 1);
	return (0);
}
