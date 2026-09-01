#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;

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

void ft_pyramid(int nb)
{
	int i = 1;

	if(nb <= 0)
	{
		return;
	}
	while(i <= nb)
	{
		int j = 0;
		while(j < nb - i)
		{
			write(1, " ", 1);
			j++;
		}
		j = 0;
		while(j < 2 * i - 1)
		{
			write(1, "#", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if(ac != 2)
	{
		ft_putstr("wrong number of arguments\n");
		return 0;
	}
	ft_pyramid(ft_atoi(av[1]));
	return (0);
}
