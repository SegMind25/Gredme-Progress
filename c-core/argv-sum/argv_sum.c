#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c , 1);
}

void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
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

	if(str[i] == '-' || str[i] == '+')
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

int main(int ac, char **av)
{
	int total = 0;
	int i = 1;

	while (i < ac)
	{
		total = total + ft_atoi(av[i]);
		i++;
	}

	ft_putnbr(total);
	write(1, "\n", 1);
	return (0);
}
