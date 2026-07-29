#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	ft_repeat(char *str, int len, char c)
{
	int k;

	k = 0;
	while(k < len && str[k] != c)
		k++;
	return (k != len);
}

int	main(int ac, char **av)
{
	if(ac <= 2)
	{
		ft_putstr("wrong number of arguments");
	}

	else if(ac == 3)
	{
		int i = 0;
		int j = 0;
		while(av[2][i])
		{
			j = 0;
			while(av[1][j] && av[1][j] != av[2][i])
				j++;
			if(av[1][j] && !ft_repeat(av[2], i, av[2][i]))
				write(1, &av[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}