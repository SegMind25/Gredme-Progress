#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str++, 1);
	}
}

int	main(int ac, char **av)
{

	if(ac == 1 || ac > 2)
	{
		ft_putstr("wrong number of arguments");
	}

	else if(ac == 2)
	{
		int i = 0;
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				av[1][i] = (av[1][i] + 13 - 'a') % 26 + 'a';
				write(1, &av[1][i], 1);
			}
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				av[1][i] = (av[1][i] - 'A' + 13) % 26 + 'A';
				write(1, &av[1][i], 1);
			}
			else 
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}

	write(1, "\n", 1);
	return 0;
}
